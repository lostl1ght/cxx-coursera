#include <iostream>
#include <vector>

using namespace std;

void print_int_vec(const vector<int> &vec)
{
    for (const auto &n : vec)
        cout << n << " ";
    cout << endl;
}

void Reverse(vector<int> &vec)
{
    int tmp;
    for (size_t i = 0; i < vec.size() / 2; i++)
    {
        tmp = vec[i];
        vec[i] = vec[vec.size() - 1 - i];
        vec[vec.size() - 1 - i] = tmp;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    Reverse(vec);
    print_int_vec(vec);
    return 0;
}
