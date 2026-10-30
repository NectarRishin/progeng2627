#include <iostream>

int main()
{
    int n, n1 = 0, n2 = 0;
    std::cin >> n;

    // n times we draw one row
    // note that we need a different variable
    // for the loop counter
    while (n1 != n)
    {
        while (n2 != n)
        {
            n2++;
            std::cout << "*";
        }
        std::cout << std::endl;
        n2 = 0;
        n1++;
    }
}