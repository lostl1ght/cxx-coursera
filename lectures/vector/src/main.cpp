#include <iostream>
#include <vector>

using namespace std;

void print_int_vec(vector<int> &vec)
{
    for (auto n : vec)
        cout << n << " ";
    cout << endl;
}

int main()
{
    vector<int> vec(5, 5); // Можно задать начальный размер и проинициализировать значениями
    print_int_vec(vec);
    vec.resize(10); // Изменить размер
    print_int_vec(vec);
    vec.assign(7, 3); // Измеить размер и изменить все значения
    print_int_vec(vec);
    vec.clear(); // Очистить
    cout << "Empty?";
    print_int_vec(vec);
    cout << "Possibly.";
    return 0;
}
