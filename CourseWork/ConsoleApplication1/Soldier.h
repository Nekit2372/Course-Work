#pragma once
#include "Person.h"

enum class Rank { soldier, seniorSoldier, sergeant, staffSergeant, captain };
enum class militaryService { emergencyService, reserve, contractService };

class Soldier :public Person
{
public:
    Soldier(int height, std::string country, std::string gender, std::string firstName, std::string lastName, Rank rk, std::string weapon, militaryService ms, int numberOfFights);
    Rank GetRank() const { return rank; }
    militaryService GetMilitaryService() const { return mService; }
    void Rankk();
    void Fights();
    void Reserve();
    void Print() const override;
private:
    Rank rank;
    std::string weapon;
    militaryService mService;
    int numberOfFights;
};