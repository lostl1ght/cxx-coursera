#include <iostream>

using namespace std;

int Factorial(int n)
{
    int fact = 1;
    for (; n > 0; n--)
        fact *= n;
    return fact;
}

int main()
{
    int n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}
