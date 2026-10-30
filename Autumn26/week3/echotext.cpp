#include <iostream>
#include <string>
int main()
{
    std::string text;
    std::cin >> text;
    while ((text != "stop") && (text != "Stop") && (text != "STOP"))
    {
        std::cout << text << std::endl;
        std::cin >> text;
    }
}