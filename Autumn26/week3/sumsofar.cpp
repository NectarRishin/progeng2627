#include <iostream>
int main()
{
    int n, sum = 0;
    std::cout << "n:" << std::endl;
    std::cin >> n;
    while (n != 0)
    {
        sum = sum + n;
        std::cout << "sum so far=" << sum << std::endl;
        std::cin >> n;
    }
}