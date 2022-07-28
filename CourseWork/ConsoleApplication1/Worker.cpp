#include "Worker.h"

std::ostream& operator << (std::ostream& o, const Factory fc)
{
    switch (fc)
    {
    case Factory::CocaCola:
        o << "CocaCola"; break;
    case Factory::Antonov:
        o << "Antonov"; break;
    case Factory::Azovstal:
        o << "Azovstal"; break;
    }
    return o;
}

std::ostream& operator << (std::ostream& o, const Position ps)
{
    switch (ps)
    {
    case Position::engineer:
        o << "engineer"; break;
    case Position::accountant:
        o << "accountant"; break;
    case Position::chiefEngineer:
        o << "chiefEngineer"; break;
    case Position::chiefAccountant:
        o << "chiefAccountant"; break;
    case Position::director:
        o << "director"; break;
    }
    return o;
}

void Worker::changePosition()
{
    if (GetPosition() == Position::engineer)
    {
        position = Position::chiefEngineer;
    }
    else if (GetPosition() == Position::accountant)
    {
        position = Position::chiefAccountant;
    }
    else
    {
        position = Position::director;
    }
}
void Worker::salaryIncrease()
{
    if (GetPosition() == Position::engineer)
    {
        salary += salary / 10;
    }
    else if (GetPosition() == Position::accountant)
    {
        salary += salary / 12;
    }
    else if (GetPosition() == Position::chiefEngineer)
    {
        salary += salary / 5;
    }
    else if (GetPosition() == Position::chiefAccountant)
    {
        salary += salary / 6;
    }
    else
    {
        salary += salary / 2;
    }
}

void Worker::Print() const
{
    Person::Info();
    Person::Print();
    std::cout << "salary - " << salary << std::endl;
    std::cout << "factory - " << GetFactory() << std::endl;
    std::cout << "position - " << GetPosition() << std::endl;
    std::cout << std::endl;
}
Worker::Worker(int height, std::string country, std::string gender, std::string firstName, std::string lastName, double salary, Factory fc, Position ps)
    :Person(height, country, gender, firstName, lastName), factory(fc), position(ps) {
    if (salary < 0) { throw std::exception("salary cannot be negative"); }
    this->salary = salary;
}