#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер доски: "; cin >> n;

	for (int i = 1; i <= n; i++) { //кол-во строк
		for (int j = 1; j <= n; j++) //одна строка
		{
			for (int l = 1; l <= n; l++)//кол-во клеток в строке
			{
				if ((l+i) % 2 == 0) {
					for (int k = 0; k < n; k++) {
						cout << "* ";
					}
				}
				else
				{
					for (int k = 0; k < n; k++)
					{
						cout << "  ";
					}
				}
			}
			cout << endl;
		}
	}
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << (i / n & 1 ^ j / n & 1 ? "* " : "  ");
		}
	}
}