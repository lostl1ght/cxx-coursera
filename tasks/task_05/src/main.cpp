#include <iostream>

using namespace std;

int main()
{
    double n, a, b, x, y;

    cin >> n >> a >> b >> x >> y;

    if (n > b)
        cout << n * (1.0 - y / 100.0);
    else if (n > a)
        cout << n * (1.0 - x / 100.0);
    else
        cout << n;

    return 0;
}
