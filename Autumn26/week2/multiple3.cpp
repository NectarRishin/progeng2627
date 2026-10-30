#include <iostream>

int main()
{
    int n, rem;

    std::cout << "num?" << std::endl;
    std::cin >> n;

    rem = n % 3;

    if (rem == 0)
    {
        // if the remainder is 0...
        std::cout << "it is multiple of 3" << std::endl;
    }
    else
    {
        // otherwise...
        std::cout << "it is not multiple of 3" << std::endl;
    }
}