#include <iostream>
#include <vector>

using namespace std;

void print_int_vec(const vector<int> &vec)
{
    for (const auto &n : vec)
        cout << n << " ";
    cout << endl;
}

vector<int> Reversed(const vector<int> &src)
{
    vector<int> dst;
    for (size_t i = 0; i < src.size(); i++)
        dst.push_back(src[src.size() - 1 - i]);
    return dst;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> dst;
    dst = Reversed(vec);
    print_int_vec(vec);
    print_int_vec(dst);
    return 0;
}
