#include <iostream>
int main()
{
    int n, t = 1, max;
    std::cin >> n;
    max = n;
    while (n != 1)
    {
        t++;
        std::cout << n << "\t";
        if (n % 2 == 1)
        {
            n = 3 * n + 1;
        }
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        if (n > max)
        {
            max = n;
        }
    }
    std::cout << n << "\t" << std::endl
              << "t=" << t << ";max=" << max << std::endl;
}