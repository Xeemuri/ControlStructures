#include <iostream>
#include <conio.h>
using namespace std;
//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef  WHILE_1
	int i = 0; // Счетчик цикла
	int n; //Количество итераций
	cout << "Введите количество итераций: ";
	cin >> n;
	while (++i < n)
	{
		cout << i << "Loops" << endl;
	}
#endif //  WHILE_1
#ifdef WHILE_2
	int n;
	cout << "Введите количество итерааций: ";
	cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
#endif
	char key; // Эта переменная будет хранить код нажатой клавиши
	do
	{
		key = _getch(); // 
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной 'key' в тип данных 'int', для того чтобы увидеть числовой код нажатой клавиши
	} while (true);
}