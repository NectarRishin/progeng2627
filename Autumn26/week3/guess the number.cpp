#include <iostream>
#include <string>
int main()
{
    int g, l = 0, u = 100;             // guess,lower bound,upper bound
    std::string f;                     // feedback
    std::cout << "</=/>" << std::endl; // less,correct,greater
    while (f != "=")
    {
        g = (l + u) / 2;
        std::cout << g << std::endl;
        std::cin >> f;
        if (f == "<")
        {
            u = g - 1;
        }
        else if (f == ">")
        {
            l = g + 1;
        }
        else if (f == "=")
        {
            std::cout << "gg";
        }
        else
        {
            std::cout << "inconsistent" << std::endl;
        }
    }
}