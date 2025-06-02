#include<iostream>
//#define FACTORIAL
//#define POWER
using namespace std;

void main1()
{
	/*setlocale(LC_ALL, "Russian");*/

#ifdef FACTORIAL
	int n;
	cout << "������� �����: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a; //��������� �������
	int n; //���������� �������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		if (n < 0) {
			N /= a;
		}
		else {
			N *= a;
		}
	}
	cout << N << endl;
	main();
#endif //POWER

	for (int i = 0; i < 256; i++)
	{
		cout << (char)i << " ";
		if (i % 16 == 0) cout << endl;
	}
}
/*
--------------------------------------------
for - ��� ���� �� �������� ����� ��������.
--------------------------------------------
*/

/*
------------------------------------------
for (counter; condition; expression)
{
	.....;
	group - of - statements;
	.....;
}

counter		- ��� ������� �����, ��� ����������,
			  ������� ������� ������� ��� ����������,
			  ��� ����� �������� ����.
			  !!! ��������� 'counter' ������������ ���� ��� - ����� ������ ��������� !!!

condition	- ��� ������� �����������, ��� ���������� �����.
			  ������� ����������� ����� ������ ��������� !!!

expression  - ��� ���������, ������� �������� �������.
			  � ���� ��������� ����� ������ ��������� ��� ��� ������, ��
			  ��� ������� ����� ����� Increment/Decrement ��������.

			  Expression ������������ ����� ������ �������� !!!
------------------------------------------
*/