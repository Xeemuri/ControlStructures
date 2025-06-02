#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int ticket;
	cout << "¬ведите ваш номер билета(6 знаков): ";
	cin >> ticket;
	int num1 = ticket / 100000;
	int num2 = ticket / 10000 % 10;
	int num3 = ticket / 1000 % 10;
	int num4 = ticket / 100 % 10;
	int num5 = ticket / 10 % 10;
	int num6 = ticket % 10;
	
	int sum1 = num1 + num2 + num3;
	int sum2 = num4 + num5 + num6;

	if (sum1 == sum2)
	{
		cout << "¬аш билет удачный!";
	}
	else
	{
		cout << "¬аш билет обычный (не удачливый)";
	}
}