#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec;
    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        vec.push_back(s);
    }
    if (vec[1] < vec[0])
        vec[0] = vec[1];
    if (vec[2] < vec[0])
        vec[0] = vec[2];
    cout << vec[0];

    return 0;
}
