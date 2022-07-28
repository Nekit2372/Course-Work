#include "Person.h"
Person::Person(int height, std::string country, std::string gender, std::string firstName, std::string lastName)
{
    if (height < 0) { throw std::exception("growth cannot be negative"); }
    this->height = height;
    this->country = country;
    this->gender = gender;
    this->firstName = firstName;
    this->lastName = lastName;
}
void Person::Info() const
{
    if (height > 200)
    {
        std::cout << "has a height of more than 200 cm" << std::endl;
    }
    else
    {
        std::cout << "height less than 200 cm" << std::endl;
    }

    if (country == "Ukraine")
    {
        std::cout << "lives in Ukraine" << std::endl;
    }
    else
    {
        std::cout << "does not live in Ukraine" << std::endl;
    }
}
void Person::Print() const
{
    std::cout << "firstName - " << firstName << std::endl;
    std::cout << "lastName - " << lastName << std::endl;
    std::cout << "height - " << height << std::endl;
    std::cout << "country - " << country << std::endl;
    std::cout << "gender - " << gender << std::endl;
}