#include <iostream>
#include "Source.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num, n;
	int reverseNum = 0;
	cout << "Введите число для проверки на палиндром: ";
	cin >> num;
	n = num;
	while (n != 0)
	{
		int remainder = n % 10;
		reverseNum = reverseNum * 10 + remainder;
		n /= 10;
	}
	if (num == reverseNum)
	{
		cout << "Ваше число - палиндром!\n";
	}
	else
	{
		cout << "Ваше число - не палиндром!\n";
	}
	return 0;
}