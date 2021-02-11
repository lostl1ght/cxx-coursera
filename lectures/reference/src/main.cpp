#include <iostream>

using namespace std;

/* По сути ссылка - это то же, что и указатель,
 * только у нее нет адресной арифметики.
 * Существует константная ссылка.
 * Нужно добавить const. */
void Swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 1;
    int b = 2;
    Swap(a, b);
    cout << "a = " << a << ", b = " << b;
    return 0;
}