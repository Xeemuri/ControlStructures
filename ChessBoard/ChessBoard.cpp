#include <iostream>
using namespace std;

void main()
{
	int n;
	int counter = 1;
	cout << "Enter the chessboard size: "; cin >> n;

	for (int i = 0; i <= n; i++) //������� ���� �����
	{
		cout << "--";
	}
	cout << endl;
	
	for (int i = 1; i <= n; i++)//���-�� �����
	{
		cout << "|";
		for (int j = 1; j <= n; j++) { //���� ������

			if ((i + j) % 2 == 0)
			{
				cout << char(219) << char(219);
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "|" << endl;
	}

	for (int i = 0; i <= n; i++) //������ ���� �����
	{
		cout << "--";
	}
	cout << endl;
}