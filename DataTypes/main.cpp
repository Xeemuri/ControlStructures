#include <iostream>
#define delimeter "\-------------------------------\n"
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "DataTypes"<< endl;
	cout << true << endl;
	cout << false << endl;
	signed short n = -32770;
	cout << n << endl;
	cout <<"Переменная типа int занимает " << sizeof(int) << endl;
	cout << "unsigned int: " << 0 << "..." << UINT_MAX << endl;
	//Макроопределения
	cout << delimeter << endl;
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << delimeter << endl;
	cout << "double: \n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;


}