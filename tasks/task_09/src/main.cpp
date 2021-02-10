#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin >> n;

    while (n != 0)
    {
        vec.push_back(n % 2);
        n /= 2;
    }

    for (size_t i = vec.size() - 1; i > 0; i--)
        cout << vec[i];
    cout << vec[0];

    return 0;
}
