#pragma warning(disable:4326)
#include <iostream>
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIB1
//#define FIB2
//#define PRIME_NUMBERS
#define PERFECT_NUMBERS
#define PYTHAGOREAN_TABLE
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FACTORIAL

	//Задача №1
	unsigned long long factorial = 1;
	int a;
	cout << "Введите число для нахождения его факториала: "; cin >> a;
	for (int i = 1; i < (a + 1); i++)
	{
		factorial *= i;
	}
	cout <<"Факториал числа "<< a<< " = "<< factorial << endl << endl;
#endif //FACTORIAL

#ifdef POWER
	//Задача №2
	int b;
	cout << "Введите число: "; cin >> a;
	cout << "Введите степень, в которую хотите возвести это число: "; cin >> b;
	if (b != 0)
	{
		double c = a;
		for (int i = 1; i < b; i++)
		{
			c *= a;
		}
		if (b < 0) { // для отрицательных степеней
			c = 1;
			for (int i = 0; i > b; i--) {
				c /= a;
			}
		}
		cout << a << " в степени " << b << " = " << c << endl << endl;
	}
	else
	{
		cout << a << "в степени 0 = 1\n\n";
	}
#endif // POWER
#ifdef ASCII
	// Задача №3
	int j = 0;
	for (int i = 1; i < 257; i++)
	{
		j++;
		if (i < 32 || i == 127) {
			cout << "? "; // эти символы не отображаются
		}
		else
		{
			cout << char(i) << " ";
		}
		if (j == 16)
		{
			cout << endl;
			j = 0;
		}
	}
	cout << endl << endl;
#endif //ASCII

#ifdef FIB1
	// Задача №4
	cout << "Введите число до которого вы хотите увидеть последовательость Фибоначчи: "; cin >> a;
	j = 0;
	int k = 0;
	for (int i = 0; i < a;)
	{
		cout << i << "\t";
		if (i == 0)
		{
			i++;
		}
		else
		{
			j = k;
			k = i;
			i = k + j;
		}
	}
	cout << endl << endl;
#endif

#ifdef FIB2
	//Задача №5
	cout << "Введите сколько чисел вы хотите увидеть в последовательости Фибоначчи: "; cin >> a;
	j = k = 0;
	int l = 0;
	for (int i = 0; i < a; i++)
	{
		cout << l << "\t";
		if (l == 0)
		{
			l++;
		}
		else
		{
			j = k;
			k = l;
			l = k + j;
		}
	}
	cout << endl << endl;
#endif
#ifdef PRIME_NUMBERS
	//Задача №6
	cout << "Введите до какого числа показывать простые числа: "; cin >> a;
	int count = 0;
	for (int i = 2; i < a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			cout << i << "\t";
		}
		count = 0;
	}
#endif 
#ifdef PERFECT_NUMBERS
	long long number, counter;
	cout << "Ряд совершенных чисел: \n";
	for (number = 1; number < LLONG_MAX; number++) {
		counter = 0;
		for (long long j = 1; j <= number / 2; j++)
		{
			if (number % j == 0)
			{
				counter += j;
			}
		}
		if (number == counter) {
			cout << number << "\t";
		}

	}
#endif // PERFECT_NUMBERS

#ifdef PYTHAGOREAN_TABLE
	cout << "Таблица Пифагора: \n";
	for (int i = 1; i <= 10; i++) cout << i << "\t";
	cout << endl;
	for (int i = 2; i <= 20; i += 2) cout << i << "\t";
	cout << endl;
	for (int i = 3; i <= 30; i += 3) cout << i << "\t";
	cout << endl;
	for (int i = 4; i <= 40; i += 4) cout << i << "\t";
	cout << endl;
	for (int i = 5; i <= 50; i += 5) cout << i << "\t";
	cout << endl;
	for (int i = 6; i <= 60; i += 6) cout << i << "\t";
	cout << endl;
	for (int i = 7; i <= 70; i += 7) cout << i << "\t";
	cout << endl;
	for (int i = 8; i <= 80; i += 8) cout << i << "\t";
	cout << endl;
	for (int i = 9; i <= 90; i += 9) cout << i << "\t";
	cout << endl;
	for (int i = 10; i <= 100; i += 10) cout << i << "\t";
	cout << endl;
#endif // PYTHAGOREAN_TABLE

}