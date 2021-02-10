#include <iostream>
#include <cmath>

using namespace std;

struct Coefficients
{
    double a;
    double b;
    double c;
    double d;
};

int main()
{
    struct Coefficients equation = {};
    cin >> equation.a >> equation.b >> equation.c;
    if (equation.a == 0 && equation.b != 0)
        cout << -equation.c / equation.b;
    else if (equation.a != 0)
    {
        equation.d = equation.b * equation.b - 4 * equation.a * equation.c;
        if (equation.d > 0)
            cout << (-equation.b + sqrt(equation.d)) / (2 * equation.a) << " " << \
                (-equation.b - sqrt(equation.d)) / (2 * equation.a);
        else if (equation.d == 0)
            cout << -equation.b / (2 * equation.a);
    }

    return 0;
}

