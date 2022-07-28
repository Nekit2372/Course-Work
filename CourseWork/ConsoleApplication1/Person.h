#pragma once
#include <iostream>
#include <string>

class Person
{
protected:
    Person(int height, std::string country, std::string gender, std::string firstName, std::string lastName);
public:
    void Info() const;
    virtual void Print() const;
private:
    int height;
    std::string country, gender, firstName, lastName;
};