#include <iostream>

double mypow(double base, int exp)
{
    double result = 1;
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    if (exp < 0)
    {
        base = 1 / base;
        exp = -exp;
    }
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    // TODO: use a for loop to implement the repeated multiplication algorithm
    // so that at the end of the loop variable result contains base^exp

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}
int main()
{
    int x, n;
    std::cin >> x >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int a = mypow(x, i);
        sum = sum + a;
    }
    std::cout << "Sum of powers from 1 to " << n << " = " << sum << std::endl;
}