#include <iostream>

int main()
{
    int n1 = 10;
    int n2 = 8;
    //double result = static_cast<double>(n2) / n1;
    double result = (double) n2 / n1;
    std::cout << result;
}