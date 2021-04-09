#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> temperatures(n);
    for (auto &t : temperatures)
        cin >> t;

    int sum = 0;
    for (auto t: temperatures)
        sum += t;
    int avg = sum / temperatures.size();

    int count = 0;
    for (auto t : temperatures)
        if (t > avg)
            count++;
    cout << count << endl;

    for (size_t i = 0; i < temperatures.size(); i++)
        if (temperatures[i] > avg)
            cout << i << " ";
    return 0;
}
