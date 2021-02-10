#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s = "Hello";
    string t;
    t = s + ", world!";
    s = "Hi!";
    cout << "s = " << s << endl;
    cout << "t = " << t << endl;
    //Происходит глубокое копирование

    vector<string> v = {"a", "b"};
    vector<string> w = v;
    w[0] = "d";
    cout << "v = " << v[0] << " " << v[1] << endl;
    cout << "w = " << w[0] << " " << w[1] << endl;
    return 0;
}
