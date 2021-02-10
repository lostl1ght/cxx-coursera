#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Person
{
    string name;
    string surname;
    int age;
};

int main()
{
    int x = -5;
    double pi = 3.14;
    bool logical_value = true;
    char symbol = 'Z';

    string hw = "Hello, world!\n";

    vector<int> nums = {1, 2, 3, 4};
    cout << nums.size() << endl;

    map<string, int> name_to_val;
    name_to_val["one"] = 1;
    name_to_val["two"] = 2;
    cout << "two is " << name_to_val["two"] << endl;

    vector<Person> staff;
    staff.push_back({"Ivan", "Ivanov", 25});
    staff.push_back({"Petr", "Petrov", 32});
    cout << staff[0].name << endl;

    return 0;
}
