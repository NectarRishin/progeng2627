#include <iostream>

int main()
{

    int x, n, counter, acc;
    counter = 0;
    acc = 0;
    std::cin >> x >> n;

    while (counter < n)
    {
        std::cout << "cnm" << std::endl;
        acc = acc + x;
        counter = counter + 1;
    }

    std::cout << x << "*" << n << "=" << acc << std::endl;
}