#include <iostream>
//#define ROMBUS1
//#define ROMBUS2
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигур(кратный 1): "; cin >> n;
	cout << endl;
	//квадрат
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	cout << endl << endl;
//
//	//восходящий треугольник
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cout << ("* ");
//
//		}
//		cout << endl;
//	}
//
//	cout << endl << endl;
//	//нисходящий треугольник
//	for (int i = n; i > 0; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << ("* ");
//
//		}
//		cout << endl;
//	}
//
//	cout << endl << endl;
//
	//треугольник с отступом
	/*for (int i = 0; i <  n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int k = i; k < n; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/

//	cout << endl << endl;
//
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < (n - 1 - i) * 2; j++)
//		{
//			cout << " ";
//		}
//		for (int k = 0; k <= i; k++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//
//	cout << endl << endl;
//	//ромб
#ifdef ROMBUS1
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		cout << "/";
		if (i > 0) {
			for (int j = 0; j < (i); j++)
			{
				cout << "  ";
			}
		}
		cout << "\\\n";
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		cout << "\\";
		if (i > 0) {
			for (int j = 0; j < (i); j++)
			{
				cout << "  ";
			}
		}
		cout << "/\n";
	}
	cout << endl << endl;

#endif // ROMBUS1

#ifdef ROMBUS2
	for (int i = 0; i < 2 * n; i++) {
		if (i < n) {
			for (int j = 0; j < n - 1 - i; j++) cout << " ";
			cout << "/";
			for (int j = 0; j < i; j++) cout << "  ";
			cout << "\\\n";
		}
		else {
			for (int j = 0; j < i - n; j++)
				cout << " ";
			cout << "\\";
			for (int j = 0; j < 2 * (2 * n - 1 - i); j++)
				cout << " ";
			cout << "/\n";
		}
	}
#endif // ROMBUS2
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			if (i == j + n || i + n == j) cout << "\\";
			else if (i+n == n * 2 - 1 - j || i-n == n*2 - 1 -j) cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
}
