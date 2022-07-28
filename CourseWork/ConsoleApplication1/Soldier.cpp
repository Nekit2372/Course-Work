#include "Soldier.h"

std::ostream& operator << (std::ostream& o, const Rank rk)
{
    switch (rk)
    {
    case Rank::soldier:
        o << "soldier"; break;
    case Rank::seniorSoldier:
        o << "senior soldier"; break;
    case Rank::sergeant:
        o << "sergeant"; break;
    case Rank::staffSergeant:
        o << "staff sergeant"; break;
    case Rank::captain:
        o << "captain"; break;
    }
    return o;
}

std::ostream& operator << (std::ostream& o, const militaryService ms)
{
    switch (ms)
    {
    case militaryService::emergencyService:
        o << "emergencyService"; break;
    case militaryService::reserve:
        o << "reserve"; break;
    case militaryService::contractService:
        o << "contractService"; break;
    }
    return o;
}

void Soldier::Rankk()
{
    if (numberOfFights > 0 && numberOfFights < 5)
    {
        rank = Rank::seniorSoldier;
        std::cout << GetRank();
    }
    else if (numberOfFights > 4 && numberOfFights < 9)
    {
        rank = Rank::sergeant;
        std::cout << GetRank();
    }
    else if (numberOfFights > 8 && numberOfFights < 13)
    {
        rank = Rank::staffSergeant;
        std::cout << GetRank();
    }
    else if (numberOfFights > 12)
    {
        rank = Rank::captain;
        std::cout << GetRank();
    }
    else if (numberOfFights == 0)
    {
        rank = Rank::soldier;
        std::cout << GetRank();
    }
}

void Soldier::Fights()
{
    if (GetMilitaryService() != militaryService::reserve)
    {
        numberOfFights++;
    }
}

void Soldier::Reserve()
{
    mService = militaryService::reserve;
}

void Soldier::Print() const
{
    Person::Info();
    Person::Print();
    std::cout << "Rank - " << GetRank() << std::endl;;
    std::cout << "Weapon - " << weapon << std::endl;
    std::cout << "Military service - " << GetMilitaryService() << std::endl;
    std::cout << "Number of fights - " << numberOfFights << std::endl;
}

Soldier::Soldier(int height, std::string country, std::string gender, std::string firstName, std::string lastName, Rank rk, std::string weapon, militaryService ms, int numberOfFights)
    :Person(height, country, gender, firstName, lastName), rank(rk), mService(ms) {
    this->weapon = weapon;
    if (numberOfFights < 0) { throw std::exception(); }
    this->numberOfFights = numberOfFights;
}