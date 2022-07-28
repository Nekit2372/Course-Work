#include <iostream>
#include <string>
#include "Worker.h"
#include "Soldier.h"

int main()
{
    try
    {
        Worker worker(200, "Poland", "Man", "Alex", "Smirnov", 12000, Factory(0), Position(0));
        worker.changePosition();
        worker.salaryIncrease();
        worker.Print();

        Worker worker1(201, "Ukraine", "Women", "Julia", "Smirnova", 10000, Factory(1), Position(1));
        worker1.changePosition();
        worker1.changePosition();
        worker1.salaryIncrease();
        worker1.Print();

        Soldier soldier(170, "Moldova", "Man", "Alex", "Aleksandrov", Rank(0), "Pistol", militaryService(2), 10);
        soldier.Fights();
        soldier.Reserve();
        soldier.Fights();
        soldier.Fights();
        soldier.Print();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}