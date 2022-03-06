#include<iostream>
#include<Windows.h>
using namespace std;
void mysetcolor(int fg, int bg) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, fg | (bg << 4));
}
void main() {
	cout << "Salam" << endl;
	mysetcolor(4, 0);
	cout << "Salam" << endl;
	mysetcolor(7, 0);
	cout << "Salam" << endl;	  
}