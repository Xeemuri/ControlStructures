#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
    char key;
	do
	{
		key = _getch();
        cout << int(key);
        switch (key) {
            case 119: //w 
            case 87: //W
            case 72: cout << "�����\n"; break; //UpArrow
            case 97: //a
            case 65: //A
            case 75: cout << "������\n"; break; //LeftArrow
            case 115: //s
            case 83: //S
            case 80: cout << "�����\n"; break; //DownArrow
            case 100: //d
            case 68: //D
            case 77: cout << "�������\n"; break; //RightArrow
            case 32: cout << "������\n"; break; //BackSpace
            case 13: cout << "�����!\n"; break; //Enter
            case 27: cout << "�����..."; //Esc
        }
	} while (key != 27);
	return 0;
}