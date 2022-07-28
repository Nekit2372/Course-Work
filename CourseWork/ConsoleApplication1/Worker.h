#pragma once
#include "Person.h"

enum class Factory { CocaCola, Antonov, Azovstal };
enum class Position { engineer, accountant, chiefEngineer, chiefAccountant, director };

class Worker :public Person
{
public:
    Worker(int height, std::string country, std::string gender, std::string firstName, std::string lastName, double salary, Factory fc, Position ps);
    Factory GetFactory() const { return factory; }
    Position GetPosition() const { return position; }
    void changePosition();
    void salaryIncrease();
    void Print() const override;
private:
    double salary;
    Factory factory;
    Position position;
};