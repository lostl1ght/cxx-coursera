#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsPalindrom(string s)
{
    size_t size = s.size();
    for (size_t i = 0; i < size; i++)
        if (s[i] != s[size - i - 1])
            return false;
    return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> vec;
    size_t minl = minLength;
    for (auto s : words)
        if (IsPalindrom(s) && s.size() >= minl)
            vec.push_back(s);
    return vec;
}

int main()
{
    vector<string> vec = PalindromFilter({"weew", "bro", "code"}, 4);
    for (auto s : vec)
        cout << s << " ";
    return 0;
}
