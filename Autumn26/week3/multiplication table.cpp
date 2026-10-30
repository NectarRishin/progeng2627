#include <iostream>
int main()
{
    int n, k;
    std::cin >> n;
    for (int a = 1; a <= n; a++)
    {
        k = n * a;
        for (int b = a; b <= k;)
        {
            std::cout << b << "\t";
            b = b + a;
        }
        std::cout << std::endl;
    }
}