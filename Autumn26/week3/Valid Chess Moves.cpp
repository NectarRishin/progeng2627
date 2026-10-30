#include <iostream>
#include <string>
int main()
{
    int h1, v1, h2, v2; // horizontal and vertical position
    std::string p;      // piece type
    bool m = 0;         // movement
    std::cin >> p >> h1 >> v1 >> h2 >> v2;
    if (h1 >= 1 && h1 <= 8 && h2 >= 1 && h2 <= 8 && v1 >= 1 && v1 <= 8 && v2 >= 1 && v2 <= 8)
    {
        int h = abs(h2 - h1), v = abs(v2 - v1);
        if (!(h == 0 && v == 0))
        {
            if (p == "N")
            {
                if ((h == 2 && v == 1) || (h == 1 && v == 2))
                {
                    m = 1;
                }
            }
            else if (p == "B")
            {
                if (h == v)
                {
                    m = 1;
                }
            }
            else if (p == "R")
            {
                if (h == 0 || v == 0)
                {
                    m = 1;
                }
            }
            else if (p == "K")
            {
                if (h <= 1 && v <= 1)
                {
                    m = 1;
                }
            }
            else if (p == "Q")
            {
                if ((h == 0 || v == 0) && (h == v))
                {
                    m = 1;
                }
            }
            else
            {
                std::cout << "invalid piece" << std::endl;
            }
        }
        else
        {
            std::cout << "no movement" << std::endl;
        }
    }
    else
    {
        std::cout << "invalid position" << std::endl;
    }
    if (m)
    {
        std::cout << "legal movement" << std::endl;
    }
    else
    {
        std::cout << "illegal movement" << std::endl;
    }
}