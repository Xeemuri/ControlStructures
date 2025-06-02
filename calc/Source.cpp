#include <iostream>
using namespace std;
#define CALC_IF
#define CALC_SWITCH

int main() {
	setlocale(LC_ALL, "Russian");
	double a,b;
	char s;
	cout << "¬ведите выражение (например 2+3): ";
	cin >> a >> s >> b;
	/*if (operation == '+') {
		result = input1 + input2;
	}
	else if (operation == '-') {
		result = input1 - input2;
	}
	else if (operation == '*') {
		result = input1 * input2;
	}
	else if (operation == '/') {
		result = input1 / input2;
	}
	else {
		cout << "¬веден некорректный символ!";
		return 0;
	}
	cout << "–езультат: " << result;*/

#ifdef CALC_IF
#endif // CALC_IF

#ifdef CALC_SWITCH
	switch (s)
	{
	case '+': cout << a << "+" << b << " = " << a + b << endl; break;
	case '-': cout << a << "-" << b << " = " << a - b << endl; break;
	case '*': cout << a << "*" << b << " = " << a * b << endl; break;
	case '/': cout << a << "/" << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}

#endif // 
	return 0;
}