// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define _USE_MATH_DEFINES 
#include <math.h>

#include "windows.h";

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");


	//
	cout << "Задача 1 " << endl;
	cout << "Введите 4 числа " << endl;

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	cout <<sqrt(pow((x1 - x2), 2) + pow((y2 - y1), 2)) << endl;
	
	

	//
	cout << "Задача 2" << endl;
	cout << "Введите числа : " << endl;

	int S, H;
	cin >> S >> H;

	cout << 1 / 3 * S * H << endl;
	
	//

	//
	cout << "Задача 3" << endl;
	cout << "Введите число  " << endl;

	int r;
	cin >> r;

	cout << M_PI * pow(r, 2) << endl;
	//

	//
	cout << "Задача 4" << endl;
	cout << "Введите число " << endl;

	int r2;
	cin >> r2;

	cout << 2 * M_PI * r2 << endl;
	//

	//
	cout << "Задача 5" << endl;
	cout << "Введите числа " << endl;

	int a, sinalpha;
	cin >> a >> sinalpha;

	cout << pow(a, 2) * (sin(sinalpha * M_PI / 180)) << endl;
	
	//

	//
	cout << "Задача 6" << endl;
	cout << "Введите два числа " << endl;

	int d1, d2;
	cin >> d1 >> d2;

	cout << 1 / 2 * d1 * d2 << endl;
	//

	//
	cout << "Задача 7" << endl;
	cout << "Введите число" << endl;

	int a2;
	cin >> a2;

	cout << pow(a2, 2) * sqrt(3) / 2 << endl;
	//

	//
	cout << " 8 Задача " << endl;
	cout << "Введите числа " << endl;

	int p, r3;
	cin >> p >> r3;

	cout <<p * r3 << endl;
	//

	//
	cout << " 9 Задача " << endl;
	cout << "Введите 4 числа  " << endl;

	int a3, b3, c3, R;
	cin >> a3 >> b3 >> c3 >> R;

	cout <<(a3 * b3 * c3) / 4 * R << endl;
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