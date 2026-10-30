#include <iostream>
int main()
{
    double x, y = 1;
    int n;
    std::cout << "x?n?" << std::endl;
    std::cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        y = y * x;
    }
    std::cout << "x^n=" << y;
}