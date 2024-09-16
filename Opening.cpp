
#include <iostream>
#include <windows.h>
#include "gotoxy.h"
//#include "delay.h"
#define g gotoxy

using namespace std;


static void Bookone() {
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


static void Opening()
{
	int x, y;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	//First book
	y = 10;
	for (int i = 0; i < 8; i++)
	{
		Sleep(12);
		g(19, y);
		cout << char(186);
		y++;
	}

	y = 10;
	for (int i = 0; i < 8; i++)
	{
		Sleep(12);
		g(27, y);
		cout << char(186);
		y++;
	}

	x = 20;
	for (int i = 0; i <= 6; i++)
	{
		Sleep(12);
		g(x, 9);
		cout << char(205);
		x++;
	}

	x = 20;
	for (int i = 0; i <= 6; i++)
	{

		Sleep(12);
		g(x, 18);
		cout << char(205);
		x++;
	}

	x = 21;
	for (int i = 0; i < 5; i++)
	{

		Sleep(12);
		g(x, 11);
		cout << char(219);
		x++;
	}
	x = 21;
	for (int i = 0; i < 5; i++)
	{

		Sleep(12);
		g(x, 16);
		cout << char(219);
		x++;
	}


	g(19, 9);
	Sleep(12);
	cout << char(201);

	g(27, 9);
	Sleep(12);
	cout << char(185);

	g(19, 18);
	Sleep(12);
	cout << char(200);

	g(27, 18);
	Sleep(12);
	cout << char(202);

	//Second book

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	g(35, 6);
	Sleep(12);
	cout << char(187);
	g(27, 7);
	Sleep(12);
	cout << char(186);
	g(27, 8);
	Sleep(12);
	cout << char(186);
	g(35, 7);
	Sleep(12);
	cout << char(204);
	g(35, 18);
	Sleep(12);
	cout << char(202);
	g(27, 6);
	Sleep(12);
	cout << char(201);

	x = 28;
	for (int i = 0; i <= 6; i++)
	{
		Sleep(12);
		g(x, 6);
		cout << char(205);
		x++;
	}
	x = 28;
	for (int i = 0; i <= 6; i++)
	{
		Sleep(12);
		g(x, 18);
		cout << char(205);
		x++;
	}

	y = 8;
	for (int i = 0; i < 10; i++)
	{
		Sleep(12);
		g(35, y);
		cout << char(186);
		y++;
	}

	y = 8;
	for (int i = 0; i < 9; i++)
	{
		Sleep(12);
		g(33, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{
		Sleep(12);
		g(29, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{
		Sleep(12);
		g(30, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{
		Sleep(12);
		g(31, y);
		cout << char(219);
		y++;
	}
	y = 8;
	for (int i = 0; i < 9; i++)
	{
		Sleep(12);
		g(32, y);
		cout << char(219);
		y++;
	}



	//Third Book
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	g(43, 18);
	Sleep(12);
	cout << char(202);
	g(43, 8);
	Sleep(12);
	cout << char(204);
	g(43, 7);
	Sleep(12);
	cout << char(187);

	x = 36;
	for (int i = 0; i <= 6; i++)
	{
		Sleep(12);
		g(x, 7);
		cout << char(205);
		x++;
	}
	x = 36;
	for (int i = 0; i <= 6; i++)
	{
		Sleep(12);
		g(x, 18);
		cout << char(205);
		x++;
	}


	y = 9;
	for (int i = 0; i < 9; i++)
	{
		Sleep(12);
		g(43, y);
		cout << char(186);
		y++;
	}

	x = 37;
	for (int i = 0; i < 5; i++)
	{
		Sleep(12);
		g(x, 8);
		cout << char(196);
		x++;
	}
	x = 37;
	for (int i = 0; i < 5; i++)
	{
		Sleep(12);
		g(x, 9);
		cout << char(196);
		x++;
	}
	x = 37;
	for (int i = 0; i < 5; i++)
	{
		Sleep(12);
		g(x, 10);
		cout << char(196);
		x++;
	}

	x = 37;
	for (int i = 0; i < 5; i++)
	{
		Sleep(12);
		g(x, 16);
		cout << char(254);
		x++;
	}


	//Forth book
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

	g(51, 8);
	Sleep(12);
	cout << char(187);
	g(51, 18);
	Sleep(12);
	cout << char(188);
	g(47, 9);
	Sleep(12);
	cout << char(254);
	g(47, 17);
	Sleep(12);
	cout << char(254);
	g(49, 10);
	Sleep(12);
	cout << char(191);
	g(49, 16);
	Sleep(12);
	cout << char(217);
	g(45, 10);
	Sleep(12);
	cout << char(218);
	g(45, 16);
	Sleep(12);
	cout << char(192);

	x = 44;
	for (int i = 0; i <= 6; i++)
	{
		Sleep(12);
		g(x, 8);
		cout << char(205);
		x++;
	}
	x = 44;
	for (int i = 0; i <= 6; i++)
	{
		Sleep(12);
		g(x, 18);
		cout << char(205);
		x++;
	}

	y = 9;
	for (int i = 0; i < 9; i++)
	{
		Sleep(12);
		g(51, y);
		cout << char(186);
		y++;
	}

	x = 46;
	for (int i = 0; i < 3; i++)
	{
		Sleep(12);
		g(x, 10);
		cout << char(196);
		x++;
	}
	x = 46;
	for (int i = 0; i < 3; i++)
	{
		Sleep(12);
		g(x, 16);
		cout << char(196);
		x++;
	}

	y = 11;
	for (int i = 0; i < 5; i++)
	{
		Sleep(12);
		g(45, y);
		cout << char(179);
		y++;
	}

	y = 11;
	for (int i = 0; i < 5; i++)
	{
		Sleep(12);
		g(49, y);
		cout << char(179);
		y++;
	}

	// BULSU HC part
	//letter B
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	y = 2;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(60, y);
		cout << char(219);
		y++;
	}
	x = 61;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 2);
		cout << char(219);
		x++;
	}
	y = 2;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(64, y);
		cout << char(219);
		y++;
	}
	x = 61;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, 4);
		cout << char(219);
		x++;
	}

	y = 5;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(64, y);
		cout << char(219);
		y++;
	}
	x = 60;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 6);
		cout << char(219);
		x++;
	}
	// letter U
	y = 2;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(67, y);
		cout << char(219);
		y++;
	}
	x = 67;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 6);
		cout << char(219);
		x++;
	}
	y = 2;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(71, y);
		cout << char(219);
		y++;
	}
	//letter L
	y = 2;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(74, y);
		cout << char(219);
		y++;
	}
	x = 74;
	for (int i = 0; i < 4; i++)
	{
		g(x, 6);
		cout << char(219);
		x++;
	}
	//Letter S
	x = 79;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		Sleep(5);
		g(x, 2);
		cout << char(219);
		x++;
	}
	y = 2;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(79, y);
		cout << char(219);
		y++;
	}
	x = 79;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 4);
		cout << char(219);
		x++;
	}
	y = 4;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(82, y);
		cout << char(219);
		y++;
	}
	x = 79;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 6);
		cout << char(219);
		x++;
	}
	//Letter U
	y = 2;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(84, y);
		cout << char(219);
		y++;
	}
	x = 84;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 6);
		cout << char(219);
		x++;
	}
	y = 2;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(88, y);
		cout << char(219);
		y++;
	}
	// letter H
	y = 2;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(94, y);
		cout << char(219);
		y++;
	}
	x = 94;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 4);
		cout << char(219);
		x++;
	}
	y = 2;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(97, y);
		cout << char(219);
		y++;
	}
	//letter C
	x = 100;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 2);
		cout << char(219);
		x++;
	}
	y = 2;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(100, y);
		cout << char(219);
		y++;
	}
	x = 100;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 6);
		cout << char(219);
		x++;
	}

	//Techbook part
	//Letter T

	x = 60;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 8);
		cout << char(219);
		x++;
	}

	y = 9;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(62, y);
		cout << char(219);
		y++;
	}
	//letter E
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(66, y);
		cout << char(219);
		y++;
	}
	x = 66;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 8);
		cout << char(219);
		x++;
	}
	x = 66;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 10);
		cout << char(219);
		x++;
	}
	x = 66;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 12);
		cout << char(219);
		x++;
	}
	//letter C
	x = 72;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 8);
		cout << char(219);
		x++;
	}
	y = 8;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(72, y);
		cout << char(219);
		y++;
	}
	x = 72;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 12);
		cout << char(219);
		x++;
	}
	// letter H
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(77, y);
		cout << char(219);
		y++;
	}
	x = 77;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 10);
		cout << char(219);
		x++;
	}
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(80, y);
		cout << char(219);
		y++;
	}
	// letter B
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(84, y);
		cout << char(219);
		y++;
	}
	x = 85;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 8);
		cout << char(219);
		x++;
	}
	y = 8;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(88, y);
		cout << char(219);
		y++;
	}
	x = 85;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, 10);
		cout << char(219);
		x++;
	}

	y = 11;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(88, y);
		cout << char(219);
		y++;
	}
	x = 84;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 12);
		cout << char(219);
		x++;
	}
	//letter O
	x = 90;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 8);
		cout << char(219);
		x++;
	}
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(90, y);
		cout << char(219);
		y++;
	}
	x = 90;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 12);
		cout << char(219);
		x++;
	}
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(94, y);
		cout << char(219);
		y++;
	}
	//letter O
	x = 96;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 8);
		cout << char(219);
		x++;
	}
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(96, y);
		cout << char(219);
		y++;
	}
	x = 96;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 12);
		cout << char(219);
		x++;
	}
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(100, y);
		cout << char(219);
		y++;
	}
	// letter K
	y = 8;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(102, y);
		cout << char(219);
		y++;
	}
	x = 102;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(x, 10);
		cout << char(219);
		x++;
	}
	x = 106;
	for (int i = 0; i < 1; i++)
	{
		Sleep(5);
		g(x, 8);
		cout << char(219);
		x++;
	}
	x = 105;
	for (int i = 0; i < 1; i++)
	{
		Sleep(5);
		g(x, 9);
		cout << char(219);
		x++;
	}

	x = 104;
	y = 10;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, y);
		cout << char(219);
		y++;
		x++;
	}
	// Catalog Part
	//letter C
	x = 60;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 14);
		cout << char(219);
		x++;
	}
	y = 14;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(60, y);
		cout << char(219);
		y++;
	}
	x = 60;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 17);
		cout << char(219);
		x++;
	}
	// letter A
	y = 15;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(66, y);
		cout << char(219);
		y++;
	}
	x = 67;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(x, 14);
		cout << char(219);
		x++;
	}
	y = 15;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(69, y);
		cout << char(219);
		y++;
	}
	x = 67;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(x, 16);
		cout << char(219);
		x++;
	}
	//letter T
	x = 72;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 14);
		cout << char(219);
		x++;
	}

	y = 14;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(74, y);
		cout << char(219);
		y++;
	}
	// letter A
	y = 15;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(78, y);
		cout << char(219);
		y++;
	}
	x = 79;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(x, 14);
		cout << char(219);
		x++;
	}
	y = 15;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(81, y);
		cout << char(219);
		y++;
	}
	x = 79;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(x, 16);
		cout << char(219);
		x++;
	}
	//letter L
	y = 14;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(84, y);
		cout << char(219);
		y++;
	}
	x = 84;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 17);
		cout << char(219);
		x++;
	}
	//letter O
	x = 90;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 14);
		cout << char(219);
		x++;
	}
	y = 14;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(90, y);
		cout << char(219);
		y++;
	}
	x = 90;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 17);
		cout << char(219);
		x++;
	}
	y = 14;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(94, y);
		cout << char(219);
		y++;
	}
	//letter G
	x = 97;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 14);
		cout << char(219);
		x++;
	}
	y = 14;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(97, y);
		cout << char(219);
		y++;
	}
	x = 97;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 17);
		cout << char(219);
		x++;
	}
	y = 16;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(101, y);
		cout << char(219);
		y++;
	}
	x = 99;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, 15);
		cout << char(220);
		x++;
	}
	//Information 
	// Letter I
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(61, y);
		cout << char(219);
		y++;
	}
	x = 60;
	for (int i = 0; i < 3; i++)
	{
		g(x, 19);
		cout << char(219);
		x++;
	}
	x = 60;
	for (int i = 0; i < 3; i++)
	{
		g(x, 22);
		cout << char(219);
		x++;
	}
	// Letter N
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(64, y);
		cout << char(219);
		y++;
	}
	x = 64;
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(x, y);
		cout << char(219);
		x += 1;
		y += 1;
	}
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(67, y);
		cout << char(219);
		y++;
	}
	// Letter F
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(69, y);
		cout << char(219);
		y++;
	}
	x = 69;
	for (int i = 0; i < 3; i++)
	{
		g(x, 19);
		cout << char(219);
		x++;
	}
	x = 69;
	for (int i = 0; i < 3; i++)
	{
		g(x, 21);
		cout << char(219);
		x++;
	}
	// letter O
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(73, y);
		cout << char(219);
		y++;
	}
	x = 73;
	for (int i = 0; i < 4; i++)
	{
		g(x, 19);
		cout << char(219);
		x++;
	}
	x = 73;
	for (int i = 0; i < 4; i++)
	{
		g(x, 22);
		cout << char(219);
		x++;
	}
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(76, y);
		cout << char(219);
		y++;
	}
	// letter R
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(78, y);
		cout << char(219);
		y++;
	}
	x = 78;
	for (int i = 0; i < 4; i++)
	{
		g(x, 19);
		cout << char(219);
		x++;
	}
	y = 20;
	for (int i = 0; i < 2; i++)
	{
		g(81, y);
		cout << char(219);
		y++;
	}
	x = 78;
	for (int i = 0; i < 3; i++)
	{
		g(x, 21);
		cout << char(219);
		x++;
	}
	x = 81;
	y = 21;
	for (int i = 0; i < 2; i++)
	{
		g(x, y);
		cout << char(219);
		x += 1;
		y += 1;
	}
	// letter M 
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(84, y);
		cout << char(219);
		y++;
	}
	y = 19;
	x = 84;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, y);
		cout << char(219);
		y++;
		x++;
	}

	y = 20;
	for (int i = 0; i < 1; i++)
	{
		Sleep(5);
		g(87, y);
		cout << char(219);
		y++;
	}
	y = 20;
	for (int i = 0; i < 1; i++)
	{
		Sleep(5);
		g(88, y);
		cout << char(219);
		y++;
	}
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(88, y);
		cout << char(219);
		y++;
	}
	// letter A
	y = 20;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(90, y);
		cout << char(219);
		y++;
	}
	x = 91;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(x, 19);
		cout << char(219);
		x++;
	}
	y = 20;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(93, y);
		cout << char(219);
		y++;
	}
	x = 91;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(x, 21);
		cout << char(219);
		x++;
	}
	// letter T
	x = 95;
	for (int i = 0; i < 5; i++)
	{
		g(x, 19);
		cout << char(219);
		x++;
	}
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(97, y);
		cout << char(219);
		y++;
	}
	//letter I
	x = 101;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, 19);
		cout << char(219);
		x++;
	}
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(102, y);
		cout << char(219);
		y++;
	}
	x = 101;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, 22);
		cout << char(219);
		x++;
	}
	//letter O
	x = 105;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 19);
		cout << char(219);
		x++;
	}
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(105, y);
		cout << char(219);
		y++;
	}
	x = 105;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 22);
		cout << char(219);
		x++;
	}
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(109, y);
		cout << char(219);
		y++;
	}
	// Letter N
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(111, y);
		cout << char(219);
		y++;
	}
	x = 111;
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(x, y);
		cout << char(219);
		x += 1;
		y += 1;
	}
	y = 19;
	for (int i = 0; i < 4; i++)
	{
		g(115, y);
		cout << char(219);
		y++;
	}

	// system part
	// letter S
	x = 60;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 24);
		cout << char(219);
		x++;
	}
	y = 24;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(60, y);
		cout << char(219);
		y++;
	}
	x = 60;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 26);
		cout << char(219);
		x++;
	}
	y = 26;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(63, y);
		cout << char(219);
		y++;
	}
	x = 60;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 28);
		cout << char(219);
		x++;
	}
	// letter Y
	y = 26;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(67, y);
		cout << char(219);
		y++;
	}
	y = 24;
	x = 65;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, y);
		cout << char(219);
		x++;
		y++;
	}
	x = 69;
	for (int i = 0; i < 1; i++)
	{
		Sleep(5);
		g(x, 24);
		cout << char(219);
		x++;
	}
	x = 68;
	for (int i = 0; i < 1; i++)
	{
		Sleep(5);
		g(x, 25);
		cout << char(219);
		x++;
	}
	// letter S
	x = 72;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 24);
		cout << char(219);
		x++;
	}
	y = 24;
	for (int i = 0; i < 2; i++)
	{
		Sleep(5);
		g(72, y);
		cout << char(219);
		y++;
	}
	x = 72;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 26);
		cout << char(219);
		x++;
	}
	y = 26;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(75, y);
		cout << char(219);
		y++;
	}
	x = 72;
	for (int i = 0; i < 4; i++)
	{
		Sleep(5);
		g(x, 28);
		cout << char(219);
		x++;
	}

	//letter T
	x = 78;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 24);
		cout << char(219);
		x++;
	}

	y = 24;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(80, y);
		cout << char(219);
		y++;
	}
	//letter E
	y = 24;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(84, y);
		cout << char(219);
		y++;
	}
	x = 84;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 24);
		cout << char(219);
		x++;
	}
	x = 84;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 26);
		cout << char(219);
		x++;
	}
	x = 84;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(x, 28);
		cout << char(219);
		x++;
	}
	// letter M 
	y = 24;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(90, y);
		cout << char(219);
		y++;
	}
	y = 24;
	x = 90;
	for (int i = 0; i < 3; i++)
	{
		Sleep(5);
		g(x, y);
		cout << char(219);
		y++;
		x++;
	}

	y = 25;
	for (int i = 0; i < 1; i++)
	{
		Sleep(5);
		g(93, y);
		cout << char(219);
		y++;
	}
	y = 25;
	for (int i = 0; i < 1; i++)
	{
		Sleep(5);
		g(94, y);
		cout << char(219);
		y++;
	}
	y = 24;
	for (int i = 0; i < 5; i++)
	{
		Sleep(5);
		g(94, y);
		cout << char(219);
		y++;
	}

	g(1, 25);
	Sleep(1000);

}