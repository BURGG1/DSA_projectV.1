
#include <iostream>
#include <windows.h>
#include "gotoxy.h"
#define g gotoxy

using namespace std;

void bookd() {


	int x, y;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	//First book
	y = 10;
	for (int i = 0; i < 8; i++)
	{

		g(19, y);
		cout << char(186);
		y++;
	}

	y = 10;
	for (int i = 0; i < 8; i++)
	{

		g(27, y);
		cout << char(186);
		y++;
	}

	x = 20;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 9);
		cout << char(205);
		x++;
	}

	x = 20;
	for (int i = 0; i <= 6; i++)
	{


		g(x, 18);
		cout << char(205);
		x++;
	}

	x = 21;
	for (int i = 0; i < 5; i++)
	{


		g(x, 11);
		cout << char(219);
		x++;
	}
	x = 21;
	for (int i = 0; i < 5; i++)
	{


		g(x, 16);
		cout << char(219);
		x++;
	}


	g(19, 9);

	cout << char(201);

	g(27, 9);

	cout << char(185);

	g(19, 18);

	cout << char(200);

	g(27, 18);

	cout << char(202);

	//Second book

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	g(35, 6);

	cout << char(187);
	g(27, 7);

	cout << char(186);
	g(27, 8);

	cout << char(186);
	g(35, 7);

	cout << char(204);
	g(35, 18);

	cout << char(202);
	g(27, 6);

	cout << char(201);

	x = 28;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 6);
		cout << char(205);
		x++;
	}
	x = 28;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 18);
		cout << char(205);
		x++;
	}

	y = 8;
	for (int i = 0; i < 10; i++)
	{

		g(35, y);
		cout << char(186);
		y++;
	}

	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(33, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(29, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(30, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(31, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(32, y);
		cout << char(219);
		y++;
	}



	//Third Book
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	g(43, 18);

	cout << char(202);
	g(43, 8);

	cout << char(204);
	g(43, 7);

	cout << char(187);

	x = 36;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 7);
		cout << char(205);
		x++;
	}
	x = 36;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 18);
		cout << char(205);
		x++;
	}


	y = 9;
	for (int i = 0; i < 9; i++)
	{

		g(43, y);
		cout << char(186);
		y++;
	}

	x = 37;
	for (int i = 0; i < 5; i++)
	{

		g(x, 8);
		cout << char(196);
		x++;
	}
	x = 37;
	for (int i = 0; i < 5; i++)
	{

		g(x, 9);
		cout << char(196);
		x++;
	}
	x = 37;
	for (int i = 0; i < 5; i++)
	{

		g(x, 10);
		cout << char(196);
		x++;
	}

	x = 37;
	for (int i = 0; i < 5; i++)
	{

		g(x, 16);
		cout << char(254);
		x++;
	}


	//Forth book
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

	g(51, 8);

	cout << char(187);
	g(51, 18);

	cout << char(188);
	g(47, 9);

	cout << char(254);
	g(47, 17);

	cout << char(254);
	g(49, 10);

	cout << char(191);
	g(49, 16);

	cout << char(217);
	g(45, 10);

	cout << char(218);
	g(45, 16);

	cout << char(192);

	x = 44;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 8);
		cout << char(205);
		x++;
	}
	x = 44;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 18);
		cout << char(205);
		x++;
	}

	y = 9;
	for (int i = 0; i < 9; i++)
	{

		g(51, y);
		cout << char(186);
		y++;
	}

	x = 46;
	for (int i = 0; i < 3; i++)
	{

		g(x, 10);
		cout << char(196);
		x++;
	}
	x = 46;
	for (int i = 0; i < 3; i++)
	{

		g(x, 16);
		cout << char(196);
		x++;
	}

	y = 11;
	for (int i = 0; i < 5; i++)
	{

		g(45, y);
		cout << char(179);
		y++;
	}

	y = 11;
	for (int i = 0; i < 5; i++)
	{

		g(49, y);
		cout << char(179);
		y++;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

}

void borderd() {
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

void bakal() {


	int x = 0, y = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	x = 30;
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
		g(29, y);
		cout << char(186);
		y++;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	x = 30;
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
		g(80, y);
		cout << char(186);
		y++;
	}
	g(32, 4);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "BULSU HC TECHBOOK CATALOG INFORMATION SYSTEM" << endl;
}


void borderoption() {

	char x = 0, y = 1;

	g(5, 4);
	cout << "Title:";
	x = 10, y = 0;
	g(9, 5);
	cout << char(218);
	g(32, 5);
	cout << char(191);
	g(9, 7);
	cout << char(192);
	g(32, 7);
	cout << char(217);

	for (int i = 0; i < 22; i++)
	{
		g(x, 5);
		cout << char(196);
		x++;
	}
	x = 10;
	for (int i = 0; i < 22; i++)
	{
		g(x, 7);
		cout << char(196);
		x++;
	}
	y = 6;
	for (int i = 0; i < 3; i++)
	{
		g(9, y);
		cout << char(179);
		x++;
	}
	y = 6;
	for (int i = 0; i < 3; i++)
	{
		g(32, y);
		cout << char(179);
		x++;
	}

	g(5, 9);
	cout << "Author:";


	x = 10, y = 0;
	g(9, 10);
	cout << char(218);
	g(32, 10);
	cout << char(191);
	g(9, 12);
	cout << char(192);
	g(32, 12);
	cout << char(217);

	for (int i = 0; i < 22; i++)
	{
		g(x, 10);
		cout << char(196);
		x++;
	}
	x = 10;
	for (int i = 0; i < 22; i++)
	{
		g(x, 12);
		cout << char(196);
		x++;
	}
	y = 11;
	for (int i = 0; i < 3; i++)
	{
		g(9, y);
		cout << char(179);
		x++;
	}
	y = 11;
	for (int i = 0; i < 3; i++)
	{
		g(32, y);
		cout << char(179);
		x++;
	}

	g(5, 14);
	cout << "Year:";

	x = 10, y = 0;
	g(9, 15);
	cout << char(218);
	g(32, 15);
	cout << char(191);
	g(9, 17);
	cout << char(192);
	g(32, 17);
	cout << char(217);

	for (int i = 0; i < 22; i++)
	{
		g(x, 15);
		cout << char(196);
		x++;
	}
	x = 10;
	for (int i = 0; i < 22; i++)
	{
		g(x, 17);
		cout << char(196);
		x++;
	}
	y = 16;
	for (int i = 0; i < 3; i++)
	{
		g(9, y);
		cout << char(179);
		x++;
	}
	y = 16;
	for (int i = 0; i < 3; i++)
	{
		g(32, y);
		cout << char(179);
		x++;
	}

	g(5, 19);
	cout << "Availability:";

	x = 10, y = 0;
	g(9, 20);
	cout << char(218);
	g(32, 20);
	cout << char(191);
	g(9, 22);
	cout << char(192);
	g(32, 22);
	cout << char(217);

	for (int i = 0; i < 22; i++)
	{
		g(x, 20);
		cout << char(196);
		x++;
	}
	x = 10;
	for (int i = 0; i < 22; i++)
	{
		g(x, 22);
		cout << char(196);
		x++;
	}
	y = 21;
	for (int i = 0; i < 3; i++)
	{
		g(9, y);
		cout << char(179);
		x++;
	}
	y = 21;
	for (int i = 0; i < 3; i++)
	{
		g(32, y);
		cout << char(179);
		x++;
	}
	g(63, 4);
	cout << "Location:";

	x = 70, y = 0;
	g(69, 5);
	cout << char(218);
	g(92, 5);
	cout << char(191);
	g(69, 7);
	cout << char(192);
	g(92, 7);
	cout << char(217);

	for (int i = 0; i < 22; i++)
	{
		g(x, 5);
		cout << char(196);
		x++;
	}
	x = 70;
	for (int i = 0; i < 22; i++)
	{
		g(x, 7);
		cout << char(196);
		x++;
	}
	y = 6;
	for (int i = 0; i < 3; i++)
	{
		g(69, y);
		cout << char(179);
		x++;
	}
	y = 6;
	for (int i = 0; i < 3; i++)
	{
		g(92, y);
		cout << char(179);
		x++;
	}

	g(63, 9);
	cout << "ISBN:";

	x = 70, y = 0;
	g(69, 10);
	cout << char(218);
	g(92, 10);
	cout << char(191);
	g(69, 12);
	cout << char(192);
	g(92, 12);
	cout << char(217);

	for (int i = 0; i < 22; i++)
	{
		g(x, 10);
		cout << char(196);
		x++;
	}
	x = 70;
	for (int i = 0; i < 22; i++)
	{
		g(x, 12);
		cout << char(196);
		x++;
	}
	y = 11;
	for (int i = 0; i < 3; i++)
	{
		g(69, y);
		cout << char(179);
		x++;
	}
	y = 11;
	for (int i = 0; i < 3; i++)
	{
		g(92, y);
		cout << char(179);
		x++;
	}



}

static void borderl() {
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

static void chain()
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

static void Booktwo() {
	int x, y;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	//First book
	y = 10;
	for (int i = 0; i < 8; i++)
	{

		g(19, y);
		cout << char(186);
		y++;
	}

	y = 10;
	for (int i = 0; i < 8; i++)
	{

		g(27, y);
		cout << char(186);
		y++;
	}

	x = 20;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 9);
		cout << char(205);
		x++;
	}

	x = 20;
	for (int i = 0; i <= 6; i++)
	{


		g(x, 18);
		cout << char(205);
		x++;
	}

	x = 21;
	for (int i = 0; i < 5; i++)
	{


		g(x, 11);
		cout << char(219);
		x++;
	}
	x = 21;
	for (int i = 0; i < 5; i++)
	{


		g(x, 16);
		cout << char(219);
		x++;
	}


	g(19, 9);

	cout << char(201);

	g(27, 9);

	cout << char(185);

	g(19, 18);

	cout << char(200);

	g(27, 18);

	cout << char(202);

	//Second book

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	g(35, 6);

	cout << char(187);
	g(27, 7);

	cout << char(186);
	g(27, 8);

	cout << char(186);
	g(35, 7);

	cout << char(204);
	g(35, 18);

	cout << char(202);
	g(27, 6);

	cout << char(201);

	x = 28;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 6);
		cout << char(205);
		x++;
	}
	x = 28;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 18);
		cout << char(205);
		x++;
	}

	y = 8;
	for (int i = 0; i < 10; i++)
	{

		g(35, y);
		cout << char(186);
		y++;
	}

	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(33, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(29, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(30, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(31, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{

		g(32, y);
		cout << char(219);
		y++;
	}



	//Third Book
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	g(43, 18);

	cout << char(202);
	g(43, 8);

	cout << char(204);
	g(43, 7);

	cout << char(187);

	x = 36;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 7);
		cout << char(205);
		x++;
	}
	x = 36;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 18);
		cout << char(205);
		x++;
	}


	y = 9;
	for (int i = 0; i < 9; i++)
	{

		g(43, y);
		cout << char(186);
		y++;
	}

	x = 37;
	for (int i = 0; i < 5; i++)
	{

		g(x, 8);
		cout << char(196);
		x++;
	}
	x = 37;
	for (int i = 0; i < 5; i++)
	{

		g(x, 9);
		cout << char(196);
		x++;
	}
	x = 37;
	for (int i = 0; i < 5; i++)
	{

		g(x, 10);
		cout << char(196);
		x++;
	}

	x = 37;
	for (int i = 0; i < 5; i++)
	{

		g(x, 16);
		cout << char(254);
		x++;
	}


	//Forth book
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

	g(51, 8);

	cout << char(187);
	g(51, 18);

	cout << char(188);
	g(47, 9);

	cout << char(254);
	g(47, 17);

	cout << char(254);
	g(49, 10);

	cout << char(191);
	g(49, 16);

	cout << char(217);
	g(45, 10);

	cout << char(218);
	g(45, 16);

	cout << char(192);

	x = 44;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 8);
		cout << char(205);
		x++;
	}
	x = 44;
	for (int i = 0; i <= 6; i++)
	{

		g(x, 18);
		cout << char(205);
		x++;
	}

	y = 9;
	for (int i = 0; i < 9; i++)
	{

		g(51, y);
		cout << char(186);
		y++;
	}

	x = 46;
	for (int i = 0; i < 3; i++)
	{

		g(x, 10);
		cout << char(196);
		x++;
	}
	x = 46;
	for (int i = 0; i < 3; i++)
	{

		g(x, 16);
		cout << char(196);
		x++;
	}

	y = 11;
	for (int i = 0; i < 5; i++)
	{

		g(45, y);
		cout << char(179);
		y++;
	}

	y = 11;
	for (int i = 0; i < 5; i++)
	{

		g(49, y);
		cout << char(179);
		y++;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

}

static void helpborder1() {
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

static void Border1()
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