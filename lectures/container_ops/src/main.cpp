#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s = "abcdefg";
    for (char c : s)
        cout << c << ',';
    cout << endl;

    vector<int> nums = {1, 5, 2, 3, 4, 5};
    for (auto c : nums) //Вообще, нужно писать int, но можно заставить компилятор угадывать с помощью auto
        cout << c << ',';
    cout << endl;

    int quantity = 0;
    for (auto c : nums) // range-based for
        if (c == 5)
            quantity++;
    cout << "There are " << quantity << " fives." << endl;

    quantity = count(begin(nums), end(nums), 5);
    cout << "There are " << quantity << " fives." << endl;

    sort(begin(nums), end(nums));
    for (auto c : nums)
        cout << c << " ";

    return 0;
}
