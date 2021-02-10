#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, surname;
    cin >> name >> surname; //По умолчанию строки считываются до первого пробела или перевода строки
    cout << "Hello, " << name << " " << surname;
    return 0;
}