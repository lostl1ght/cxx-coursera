#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    string s = "abc";
    string t = "bcd";
    if (s < t)
        cout << "s is less than t" << endl;
    else
        cout << "s isn't less than t" << endl;

    vector<string> v = {"abc", "def"};
    vector<string> w = {"xyz", "klm"};
    if (v == w)
        cout << "v is equal to w" << endl;
    else
        cout << "v isn't equal to w" << endl;

    map<string, int> a;
    map<string , int> b;
    a["one"] = 1;
    if (a == b)
        cout << "a is equal to b" << endl;
    else
        cout << "a isn't equal to b" << endl;
    //Стандартные типы сравниваются естественным образом
    return 0;
}
