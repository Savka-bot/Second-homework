

#include <iostream>

#define _USE_MATH_DEFINES 
#include <math.h>



using namespace std;

int main()
{
	
	//
	cout << "1 задание" << endl;
	cout << "Введите 4 числа " << endl;

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2 >> endl;

	cout << "Answer = " << sqrt(pow((x1 - x2), 2) + pow((y2 - y1), 2)) << endl;
	//
	

	//
	cout << "2 задание" << endl;
	cout << "Введите 2 числа: " << endl;

	int a, b;
	cin >> a >> b;

	cout << "Answer = " << 1 / 3 * a * b << endl;
	
	
	cout << "Задача 3" << endl;
	cout << "Площа кола обчислюється за формулою" << endl;
	cout << "Введіть r: " << endl;

	int r;
	cin >> r;

	cout << "Результат S0 =  " << M_PI * pow(r, 2) << endl;
	cout << "-----------------------------------------" << endl;
	//

	//
	cout << "Задача 4" << endl;
	cout << "Довжина кола обчислюється за формулою" << endl;
	cout << "Введіть r: " << endl;

	int r2;
	cin >> r2;

	cout << "Результат L = " << 2 * M_PI * r2 << endl;
	cout << "-----------------------------------------" << endl;
	//

	//
	cout << "Задача 5" << endl;
	cout << "Площа ромба, якщо відомий бік і гострий кут" << endl;
	cout << "Введіть a, альфа: " << endl;

	int a, alpha;
	cin >> a >> alpha;

	cout << "Результат S = " << pow(a, 2) * (sin(alpha * M_PI / 180)) << endl;
	cout << "-----------------------------------------" << endl;
	//

	//
	cout << "Задача 6" << endl;
	cout << "Площа ромба, якщо відомі його діагоналі" << endl;
	cout << "Введіть d1,d2: " << endl;

	int d1, d2;
	cin >> d1 >> d2;

	cout << "Результат S = " << 1 / 2 * d1 * d2 << endl;
	cout << "-----------------------------------------" << endl;
	//

	//
	cout << "Задача 7" << endl;
	cout << "Площа правильного трикутника" << endl;
	cout << "Введіть a: " << endl;

	int a2;
	cin >> a2;

	cout << "Результат S = " << pow(a2, 2) * sqrt(3) / 2 << endl;
	cout << "-----------------------------------------" << endl;
	//

	//
	cout << "Задача 8" << endl;
	cout << "Площа трикутника по відомому радіусу вписаного кола та напівпериметру" << endl;
	cout << "Введіть p,r: " << endl;

	int p, r3;
	cin >> p >> r3;

	cout << "Результат S = " << p * r3 << endl;
	cout << "-----------------------------------------" << endl;
	//

	//
	cout << "Задача 9" << endl;
	cout << "Площа трикутника по відомим трьом сторонам та радіусу описаного кола" << endl;
	cout << "Введіть a,b,c,R: " << endl;

	int a3, b3, c3, R;
	cin >> a3 >> b3 >> c3 >> R;

	cout << "Результат S = " << (a3 * b3 * c3) / 4 * R << endl;
	cout << "-----------------------------------------" << endl;
	//
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file