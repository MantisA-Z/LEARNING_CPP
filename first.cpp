// First c++ program

#include <iostream>
#include <string>

using str_t = std::string;
typedef std::string str_t;

int main()
{
    str_t name;
    int age;
    std::cout << "What is your age? ";
    std::cin >> age;
    std::cout << "what is your full name? ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << " you are " << age << " years old.";
    return 0;
}
