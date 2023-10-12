// Lab_03_3.cpp
// < Михайлів Богдан >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 16
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R1; // вхідний параметр
	double R2; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	//1
	if (x <= R1 && x <= 0)
		y = ((R1 + 2) / (-R1)) * x * (-2);
	else
		//2
		if (-R1 < x && x <= 0)
			y = R1 - sqrt(pow(R1, 2) - pow(x, 2));
		else
		//3
		if (0 < x && x <= R2)
	        y = -sqrt(pow(R2, 2) - pow(x - R2, 2));
		else
		    y = (-R2) + (R2 / 2) * (x - 4);
	    //4
			if (R2<x<=4)
				y = - R1;
			else
					
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}

