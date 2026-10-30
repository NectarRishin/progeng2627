#include <iostream>
#include <cmath>
int main()
{
    double a, b, c, P, A, s; // sides,parameter,area,semi-parameter of triangle
    std::cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            std::cout << "equilateral" << std::endl;
        }
        else if (a == b || b == c || c == a)
        {
            std::cout << "isosceles" << std::endl;
        }
        else
        {
            std::cout << "scalene" << std::endl;
        }
        P = a + b + c;
        std::cout << "perimeter=" << P << std::endl;
        double s = 0.5 * P;
        A = std::sqrt(s * (s - a) * (s - b) * (s - c));
        std::cout << "area=" << A << std::endl;
    }
    else
    {
        std::cout << "invalid";
    }
}