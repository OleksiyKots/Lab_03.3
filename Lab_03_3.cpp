// Lab_03_3.cpp
// ���� ������
//����������� ������ � 3.3
// ������������, ������ �������� �������
// ������ 15

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R1; // ������ ������� ��������
	double R2; // ������ ������� ��������
	double y; // ��������� ���������� ������

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
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
