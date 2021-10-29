
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int num;
    cout << "Введите число: ";
    cin >> num;

    if (num % 2 != 0)
        cout << "Число " << num << " нечетное" << endl;
    else
        cout << "Число " << num << " четное" << endl;

    system("pause");

    return 0;
}