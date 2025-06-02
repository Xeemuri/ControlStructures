#include <iostream>

//#define BINARY
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int n, counter = 1;
	long long result = 0;
	cout << "Введите число в 10-ичной системе счисления: "; cin >> n;
#ifdef BINARY
	while (n != 0)
	{
		int remainder = n % 2;
		result += remainder * counter;
		n /= 2;
		counter *= 10;

	}
	cout << n << "в двоичной системе - " << result;
#endif // binary
	while (n != 0)
	{
		int remainder = n % 16;
		char symbol = ' ';
		switch (remainder)
		{
		case 10: symbol = 'A'; cout << symbol; break;
		case 11: symbol = 'B'; cout << symbol; break;
		case 12: symbol = 'C'; cout << symbol; break;
		case 13: symbol = 'D'; cout << symbol; break;
		case 14: symbol = 'E'; cout << symbol; break;
		case 15: symbol = 'F'; cout << symbol; break;
		default:
			cout << remainder;
			break;
		}
		counter *= 10;
		n /= 16;

	}
	cout << result;

}