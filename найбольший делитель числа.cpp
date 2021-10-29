#include<iostream>


using namespace std;


int main() 
{

    setlocale(LC_ALL, "Rus");

    int n;

    cin >> n;

    int i = n / 2;
    while (n % i != 0) i--;
    if (i != 1) cout << "наиб. делитель " << i << endl;
    else cout << "число простое \n";
    system("pause");
    return 0;
}