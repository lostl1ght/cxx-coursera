#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int counter = 0;
    for (size_t i = 0; i < s.size(); i++)
        if (s[i] == 'f')
        {
            if (counter == 1)
            {
                cout << i;
                counter++;
                break;
            }
            else
                counter++;
        }
    if (counter == 1)
        cout << -1;
    if (counter == 0)
        cout << -2;
    return 0;
}