#include <iostream>
#include <cmath>
int main()
{
    double x, n, sum = 0;
    std::cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = std::pow(x, i);
        sum = sum + a;
    }
    std::cout << "sum of powers from 1 to " << n << " = " << sum << std::endl;
}