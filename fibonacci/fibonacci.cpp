#include <iostream>

int main()
{
        int x = 0;
        int y = 1;
        int z;
        while (x < 10000)
        {
            std::cout << x << '\n';
            z = x + y;
            x = y;
            y = z;
        };
}