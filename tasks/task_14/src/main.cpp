#include <iostream>
#include <string>
#include <vector>

using namespace std;

void MoveStrings(vector<string> &src, vector<string> &dst)
{
    for (const auto &s : src)
        dst.push_back(s);
    src.clear();
}

void print_str_vec(const vector<string> &vec)
{
    for (const auto &s : vec)
        cout << s << " ";
    cout << endl;
}

int main()
{
    vector<string> dst = {"g"};
    vector<string> src = {"ab", "sd", "dm"};
    MoveStrings(src, dst);
    print_str_vec(dst);
    cout << src.size();
    return 0;
}
