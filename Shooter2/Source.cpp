#include <iostream>
#define Escape 27
#define Enter 13
#define UpArrow 77
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77
#include <conio.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Russian");
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow)
		{
			cout << "������" << endl;
		}
		else if (key == 's'|| key == 'S' || key == DownArrow)
		{
			cout << "�����";
		}
		else if (key == 'd' || key == 'D' || key == RightArrow)
		{
			cout << "������";
		}
		else if (key == 'a' ||key == 'A' || key == LeftArrow)
		{
			cout << "�����";
		}
		else if (key == 13)
		{
			cout << "�����!";
		}
		else if (key == ' ')
		{
			cout << "������";
		}
		else 
		{
			if (key != -32 && key != Escape)cout << "Error" << endl;
		} 

	} while (key != Escape);
}