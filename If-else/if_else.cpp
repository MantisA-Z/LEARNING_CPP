#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "You are allowed to view this site.";
    }
    else if (age < 5)
    {
        std::cout << "Boy you should go and watch cat videos!";
    }
    else
    {
        std::cout << "You are not of appropriate age to view this site.";
    }
}