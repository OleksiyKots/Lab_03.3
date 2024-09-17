// Lab_03_3.cpp
// Коць Олексій
//Лабораторна робота № 3.3
// Розгалуження, задане графіком функції
// Варіант 15

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R1; // перший вхідний параметр
	double R2; // другий вхідний параметр
	double y; // результат обчислення виразу

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -6)
		y = 1;
	else
		if (-6 < x <= -4)
			y = (-x / 2) - (2 * R2 / 2);
		else
			if (-4 < x <= 0)
				y = sqrt(R2 * R2 - pow((x + R2), 2));
			else
				if (0 < x <= 2)
					y = -sqrt(R1 * R1 - pow((x - R1), 2));
				else
					y = (-x / 2) + R1;
	
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;

}
