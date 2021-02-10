#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string s)
{
    size_t size = s.size();
    for (size_t i = 0; i < size; i++)
        if (s[i] != s[size - i - 1])
            return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << IsPalindrom(s);
    return 0;
}
