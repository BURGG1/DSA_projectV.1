
#include <iostream>
#include "gotoxy.h"
#define g gotoxy
using namespace std;

static void Border()
{
	int x = 0, y = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

	x = 15;
	for (int i = 0; i < 100; i++)
	{

		gotoxy(x, 1);
		cout << char(223);

		gotoxy(x, 28);
		cout << char(220);
		x++;
	}


	y = 1;
	for (int i = 0; i < 28; i++)
	{

		gotoxy(15, y);
		cout << char(219);

		gotoxy(115, y);
		cout << char(219);
		y++;
	}
}

static void borderlog() {
	int x = 0, y = 0;
	x = 63;
	for (int a = 0; a < 30; a++) {

		g(x, 9);
		cout << char(223);


		g(x, 11);
		cout << char(220);

		g(x, 14);
		cout << char(220);

		g(x, 17);
		cout << char(220);
		x++;
	}
	y = 9;
	for (int a = 0; a < 9; a++) {

		g(63, y);
		cout << char(219);

		g(93, y);
		cout << char(219);
		y++;
	}

}


static void bchain()
{
	int x = 0, y = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	x = 53;
	for (int b = 0; b < 50; b++) {
		g(x, 5);
		if (b % 2 == 0)
			cout << char(205);
		else
			cout << char(196);
		x++;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	y = 3;
	for (int b = 0; b < 3; b++) {
		g(52, y);
		cout << char(186);
		y++;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	x = 53;
	for (int b = 0; b < 51; b++) {
		g(x, 3);
		if (b % 2 == 0)
			cout << char(205);
		else
			cout << char(196);
		x++;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	y = 3;
	for (int b = 0; b < 3; b++) {
		g(103, y);
		cout << char(186);
		y++;
	}
	g(56, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "BULSU HC TECHBOOK CATALOG INFORMATION SYSTEM" << endl;
}

static void dchain()
{
	int x = 0, y = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	x = 47;
	for (int b = 0; b < 50; b++) {
		g(x, 5);
		if (b % 2 == 0)
			cout << char(205);
		else
			cout << char(196);
		x++;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	y = 3;
	for (int b = 0; b < 3; b++) {
		g(46, y);
		cout << char(186);
		y++;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	x = 47;
	for (int b = 0; b < 51; b++) {
		g(x, 3);
		if (b % 2 == 0)
			cout << char(205);
		else
			cout << char(196);
		x++;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	y = 3;
	for (int b = 0; b < 3; b++) {
		g(97, y);
		cout << char(186);
		y++;
	}
	g(50, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "BULSU HC TECHBOOK CATALOG INFORMATION SYSTEM" << endl;

}

static void helpborder() {
	int x = 0, y = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	x = 3;
	for (int i = 0; i < 115; i++)
	{

		g(x, 1);
		cout << char(223);



		gotoxy(x, 28);
		cout << char(220);
		x++;
	}
	y = 1;
	for (int i = 0; i < 28; i++)
	{

		gotoxy(3, y);
		cout << char(219);

		gotoxy(117, y);
		cout << char(219);
		y++;
	}
}

static void smallb() {

	int x = 0, y = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	x = 30;
	for (int i = 0; i < 50; i++) {

		g(x, 8);
		cout << char(223);

		g(x, 21);
		cout << char(220);
		x++;
	}

	y = 8;
	for (int i = 0; i < 14; i++) {

		g(30, y);
		cout << char(219);

		g(79, y);
		cout << char(219);
		y++;
	}
}