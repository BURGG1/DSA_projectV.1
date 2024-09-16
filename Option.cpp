#include <fstream>
#include<iostream> 
#include<conio.h>
#include<string>
#include <windows.h>
#include "gotoxy.h"
#include "designoption.cpp"
#define g gotoxy

using namespace std;

fstream Record;

fstream Summary_Record;

struct Book {
	string title, author, year, availability, location, callno, rent, name;
};

struct User {
	string name, author, title, rental;
};
//initializing functions with library and rent as parameter 


bool Help1();
void text1();

void addBook(int library);
void deleteBook(int library);
void editBook(int library);
bool searchBook(int library);
void viewAllBooks(int library);
void summary();
void manage();
void info(int rent);
void viewuser(int rent);
void deleteinfo(int rent);
int library = 0;
int rents = 0;
Book books[30];
User users[30];


void increment(int a) {
	a++;
	library = a;

}

void incre(int b) {
	b++;
	rents = b;
}

void decrement(int a) {
	a--;
	library = a;
}

void decre(int b) {
	b--;
	rents = b;
}


void manage() {
	char x = 0, y = 1;
	char choice = ' ';
	const int OPTIONS = 5;


	do {
		system("cls");
		bookd();
		borderd();
		chain();
		for (int i = 1; i <= OPTIONS; ++i) {
			if (i == y) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

				// Highlight the selected option
				for (int j = 0; j < 30; j++) {
					g(62 + j, 8 + (i - 1) * 4);
					cout << char(220);
					g(62 + j, 11 + (i - 1) * 4);
					cout << char(220);
				}

				for (int j = 0; j < 3; j++) {
					g(62, 8 + (i - 1) * 4 + j);
					cout << char(220);
					g(91, 8 + (i - 1) * 4 + j);
					cout << char(220);
				}
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

				// Draw non-selected options
				for (int j = 0; j < 30; j++) {
					g(62 + j, 8 + (i - 1) * 4);
					cout << char(220);
					g(62 + j, 11 + (i - 1) * 4);
					cout << char(220);
				}

				for (int j = 0; j < 3; j++) {
					g(62, 8 + (i - 1) * 4 + j);
					cout << char(220);
					g(91, 8 + (i - 1) * 4 + j);
					cout << char(220);
				}
			}

			// Display menu options text
			if (i == 1) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				g(63, 10);
				cout << " 1. Add Book" << endl;
			}
			else if (i == 2) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				g(63, 14);
				cout << " 2. Delete Book" << endl;
			}
			else if (i == 3) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				g(63, 18);
				cout << " 3. Update Book" << endl;
			}
			else if (i == 4) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				g(63, 22);
				cout << " 4.  View all books" << endl;
			}
			else if (i == 5) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				g(63, 26);
				cout << " 5. Back" << endl;
			}
		}


		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		g(20, 22);
		cout << "Use arrow keys to navigate " << endl;
		g(20, 23);
		cout << "and press Enter key to select " << endl;

		g(17, 2); cout << "Press F2 key to go to Help option:" << endl;

		// Detect keypress
		int key = _getch();
		if (key == 0 || key == 224) { // Extended key
			key = _getch(); // Read the actual key code
			if (key == 72) { // Up arrow key
				if (y > 1) {
					y--;
				}
			}
			else if (key == 80) { // Down arrow key
				if (y < OPTIONS) {
					y++;
				}
			}
			else if (key == 60) { // F2 key
				system("cls");
				Help1();
			}
		}
		else if (key == 13) { // Enter key
			if (y == 1) {
				system("cls");
				choice = '1';
				addBook(library);
			}
			else if (y == 2) {
				system("cls");
				choice = '2';
				deleteBook(library);

			}
			else if (y == 3) {
				choice = '3';
				editBook(library);
			}
			else if (y == 4) {
				system("cls");
				choice = '4';
				viewAllBooks(library);
			}
			else if (y == 5) {
				return;
			}
		}

	} while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');
}

void addBook(int library) {
	string title, author, availability, year, location, callno;
	char x = 0, y = 1;
	g(5, 1); cout << "ADD BOOK" << endl;
	if (library < 30) {

		borderoption();
		g(12, 6);
		getline(cin, title);
		g(12, 11);
		getline(cin, author);
		g(12, 16);
		getline(cin, year);
		g(12, 21);
		getline(cin, availability);
		g(72, 6);
		getline(cin, location);
		g(72, 11);
		getline(cin, callno);

		books[library].title = title;
		books[library].author = author;
		books[library].year = year;
		books[library].availability = availability;
		books[library].location = location;
		books[library].callno = callno;


		Record.open("Book_Record.txt", ios::out | ios::app);
		if (!Record) {
			cout << "Cannot Create File";
		}
		else {
			g(5, 23); cout << "File Created";

			Record << "Title: " << title << endl;
			Record << "Author: " << author << endl;
			Record << "Year: " << year << endl;
			Record << "Availability: " << availability << endl;
			Record << "Location: " << location << endl;
			Record << "ISBN: " << callno << endl;
			Record.close();
		}
		increment(library);

		g(5, 25); cout << "BOOK ADDED SUCCESSFULLY!" << endl;
		g(5, 27); cout << "Press any key to continue . . . " << endl;

		_getch();
		manage();
	}
	else {

		g(5, 25); cout << "YOU HAVE REACHED THE MAXIMUM NUMBER OF BOOKS TO BE ADDED!" << endl;
		g(5, 27); cout << "Press any key to continue . . ." << endl;

		_getch();
		manage();
	}
}

void deleteBook(int library) {
	string del;
	char x = 0, y = 1;
	char choice = ' ';
	const int options = 2;
	g(50, 1); cout << "DELETE BOOK\n\n";
	if (library == 0) {
		cout << "THERE IS NO BOOK TO DELETE!\n\nPress any key to continue . . .";
		_getch();
		manage();
		return;
		cin.ignore();
	}
	g(90, 1);
	cout << "Enter Title:";

	x = 90, y = 0;
	g(89, 2);
	cout << char(218);
	g(112, 2);
	cout << char(191);
	g(89, 4);
	cout << char(192);
	g(112, 4);
	cout << char(217);

	for (int i = 0; i < 22; i++)
	{
		g(x, 2);
		cout << char(196);
		x++;
	}
	x = 90;
	for (int i = 0; i < 22; i++)
	{
		g(x, 4);
		cout << char(196);
		x++;
	}
	y = 3;
	for (int i = 0; i < 3; i++)
	{
		g(89, y);
		cout << char(179);
		x++;
	}
	y = 3;
	for (int i = 0; i < 3; i++)
	{
		g(112, y);
		cout << char(179);
		x++;
	}

	gotoxy(91, 3); getline(cin, del);

	for (int i = 0; i < library; i++) {
		if ((books[i].title == del) || (books[i].author == del)) {
			g(50, 3); cout << "BOOK FOUND!";

			borderoption();
			g(12, 6); cout << books[i].title << endl;
			g(12, 11); cout << books[i].author << endl;
			g(12, 16); cout << books[i].year << endl;
			g(12, 21); cout << books[i].availability << endl;
			g(72, 6); cout << books[i].location << endl;
			g(72, 11); cout << books[i].callno << endl;

			do {
				g(50, 21); cout << "Do you want to delete" << endl;
				for (int i = 1; i <= options; i++) {
					if (i == y) {
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
						cout << " ";
					}
					else {
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
						cout << " ";
					}
					if (i == 1) {
						if (i == y)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
						g(50, 23); cout << "[ Yes ]" << endl;
					}
					else if (i == 2) {
						if (i == y)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
						g(70, 23); cout << "[ No ]" << endl;
					}
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

				g(50, 25); cout << "Use arrow keys to select" << endl;

				switch (_getch()) {
				case 75:
					if (y > 1)
						g(x, y);
					cout << "  ";
					y--;
					break;
				case 77:
					if (y < options)
						g(x, y);
					cout << "  ";
					y++;
					break;
				case 13:
					if (y == 1) {
						system("cls");
						choice = '1';
						books[i].title = (" ");
						books[i].author = (" ");
						books[i].year = (" ");
						books[i].availability = (" ");
						books[i].location = (" ");
						books[i].callno = (" ");

						for (int j = i; j < library - 1; j++) {
							books[j] = books[j + 1];
						}

						decrement(library);
						library--;

						Record.open("Book_Record.txt", ios::out);
						if (Record.is_open()) {
							for (int j = 0; j < library; j++) {
								Record << books[j].title << endl;
								Record << books[j].author << endl;
								Record << books[j].year << endl;
								Record << books[j].availability << endl;
								Record << books[j].location << endl;
								Record << books[j].callno << endl;
							}
							Record.close();
						}
						else {
							g(50, 26); cout << "Error opening file!";
						}

						g(50, 26); cout << "BOOK SUCCESSFULLY DELETED!\n\nPress any key to continue . . .";
						_getch();
						manage();
						return;

					}
					else if (y == 2) {
						system("cls");
						choice = '2';
						manage();
						return;
					}
					break;
				}
				if (y < 1) {
					y = 2;
				}
				else if (y > options) {
					y = 1;
				}
			} while (choice != '2');
		}
	}
	cout << "\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
	_getch();
	manage();
}

void editBook(int library) {
	system("cls");
	string edittitle;
	char x = 0, y = 1;
	char choice = ' ';
	const int options = 2;
	g(5, 0); cout << "UPDATE BOOK" << endl;

	if (library == 0) {
		cout << "THERE IS NO BOOK TO EDIT!\n\nPress any key to continue . . .";
		_getch();
		manage(); // Return to main menu
		return;   // Return from the function
	}

	g(5, 1); cout << "Enter Title or Authors Name: ";
	getline(cin, edittitle);

	bool bookFound = false; // Flag to track if book is found

	for (int i = 0; i < library; i++) {
		if ((books[i].title == edittitle) || (books[i].author == edittitle)) {
			// Book found, proceed with editing
			bookFound = true;

			g(5, 2); cout << "BOOK FOUND!";
			borderoption();

			g(12, 6); cout << books[i].title << endl;
			g(12, 11); cout << books[i].author << endl;
			g(12, 16); cout << books[i].year << endl;
			g(12, 21); cout << books[i].availability << endl;
			g(72, 6); cout << books[i].location << endl;
			g(72, 11); cout << books[i].callno << endl;

			do {

				g(50, 19); cout << "Do you want to update this information?" << endl;
				for (int i = 1; i <= options; i++) {
					if (i == y) {
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
						cout << " ";
					}
					else {
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
						cout << " ";
					}
					if (i == 1) {
						if (i == y)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
						g(50, 21); cout << "[ Yes ]" << endl;
					}
					else if (i == 2) {
						if (i == y)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
						g(70, 21); cout << "[ No ]" << endl;
					}
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				g(50, 23); cout << "Use arrow keys to select" << endl;
				switch (_getch()) {
				case 75:
					if (y > 1)
						g(x, y);
					cout << "  ";
					y--;
					break;
				case 77:
					if (y < options)
						g(x, y);
					cout << "  ";
					y++;
					break;
				case 13:
					if (y == 1) {
						system("cls");
						choice = '1';

						borderoption();

						g(12, 6);  getline(cin, books[i].title);
						g(12, 11); getline(cin, books[i].author);
						g(12, 16); getline(cin, books[i].year);
						g(12, 21); getline(cin, books[i].availability);
						g(72, 6);  getline(cin, books[i].location);
						g(72, 11); getline(cin, books[i].callno);

						ofstream Record("Book_Record.txt");
						if (Record.is_open()) {
							for (int k = 0; k < library; k++) {
								Record << books[k].title << endl;
								Record << books[k].author << endl;
								Record << books[k].year << endl;
								Record << books[k].availability << endl;
								Record << books[k].location << endl;
								Record << books[k].callno << endl;
							}
							Record.close();
						}

						g(5, 25); cout << "SUCCESSFULLY UPDATED!" << endl;
						g(5, 27); cout << "Press any key to continue . . .";
						_getch();
						manage();
						return;

					}
					else if (y == 2) {
						system("cls");
						choice = '2';
						manage();
						return;
					}
					break;
				}
				if (y < 1) {
					y = 2;
				}
				if (y > options) {
					y = 1;
				}
			} while (choice != '2');
		}


	}
	if (!bookFound) {
		cout << "\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
		_getch();
		manage();
		return;
	}
}


bool searchBook(int library) {
	string search;
	bool print = false;
	char x = 0, y = 1;
	g(50, 1); cout << "SEARCH BOOK" << endl;


	g(90, 1);
	cout << "Search:";

	x = 90, y = 0;
	g(89, 2);
	cout << char(218);
	g(112, 2);
	cout << char(191);
	g(89, 4);
	cout << char(192);
	g(112, 4);
	cout << char(217);

	for (int i = 0; i < 22; i++)
	{
		g(x, 2);
		cout << char(196);
		x++;
	}
	x = 90;
	for (int i = 0; i < 22; i++)
	{
		g(x, 4);
		cout << char(196);
		x++;
	}
	y = 3;
	for (int i = 0; i < 3; i++)
	{
		g(89, y);
		cout << char(179);
		x++;
	}
	y = 3;
	for (int i = 0; i < 3; i++)
	{
		g(112, y);
		cout << char(179);
		x++;
	}

	gotoxy(91, 3); getline(cin, search);

	ifstream Record("Book_Record.txt");
	if (Record.is_open()) {
		string title, author, availability, year, location, callno;
		while (getline(Record, title)) {
			getline(Record, author);
			getline(Record, availability);
			getline(Record, year);
			getline(Record, location);
			getline(Record, callno);


			if (title == search || author == search) {
				borderoption();

				g(12, 6); cout << title << endl;
				g(12, 11); cout << author << endl;
				g(12, 16); cout << year << endl;
				g(12, 21); cout << availability << endl;
				g(72, 6); cout << location << endl;
				g(72, 11); cout << callno << endl;

				print = true;
				break;

			}

		}
		Record.close();
	}

	else {

		cout << "Unable to open file!" << endl;
	}
	if (!print) {
		cout << "Book not found" << endl;
	}

	g(10, 25); cout << "Press Enter key to continue" << endl;
	_getch();

	return true;
}

void viewAllBooks(int library) {
	cout << "VIEW ALL BOOKS\n\n";

	ifstream Record("Book_Record.txt");
	if (Record.is_open()) {
		string title, author, year, availability, location, callno;
		int count = 1;
		while (getline(Record, title)) {
			getline(Record, author);
			getline(Record, year);
			getline(Record, availability);
			getline(Record, location);
			getline(Record, callno);

			cout << "BOOK " << count << " DETAILS\n\n";
			cout << "TITLE: " << title << endl;
			cout << "AUTHOR: " << author << endl;
			cout << "YEAR: " << year << endl;
			cout << "AVAILABILITY: " << availability << endl;
			cout << "LOCATION: " << location << endl;
			cout << "ISBN: " << callno << endl << endl;

			count++;
		}
		Record.close();
	}
	else {
		cout << "Unable to open file!" << endl;
	}

	cout << "Press any key to continue . . .";
	_getch();
	manage();
}

void summary()
{
	system("cls");
	int x = 0, y = 1;
	char choice = ' ';
	const int options = 4;
	do {
		system("cls");
		bookd();
		borderd();
		chain();
		for (int i = 1; i <= options; ++i) {
			if (i == y) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				cout << "  ";
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout << "  ";
			}

			// Display menu options text
			if (i == 1) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				g(63, 10);
				cout << " 1. Renting" << endl;
			}
			else if (i == 2) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				g(63, 14);
				cout << " 2. List Of All Record" << endl;
			}
			else if (i == 3) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				g(63, 18);
				cout << " 3. Delete" << endl;
			}
			else if (i == 4) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				g(63, 22);
				cout << " 4. Back" << endl;
			}
		}


		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		g(20, 22);
		cout << "Use arrow keys to navigate " << endl;
		g(20, 23);
		cout << "and press Enter key to select " << endl;

		g(17, 2); cout << "Press F2 key to go to Help option:" << endl;

		// Detect keypress
		int key = _getch();
		if (key == 0 || key == 224) { // Extended key
			key = _getch(); // Read the actual key code
			if (key == 72) { // Up arrow key
				if (y > 1) {
					y--;
				}
			}
			else if (key == 80) { // Down arrow key
				if (y < options) {
					y++;
				}
			}
			else if (key == 60) { // F2 key
				system("cls");
				Help1();


			}
		}
		else if (key == 13) { // Enter key
			if (y == 1) {
				system("cls");
				choice = '1';
				info(rents);

			}
			else if (y == 2) {
				system("cls");
				choice = '2';
				viewuser(rents);

			}
			else if (y == 3) {
				system("cls");
				choice = '3';
				deleteinfo(rents);
			}
			else if (y == 4) {
				return;
			}
		}

	} while (choice != '1' && choice != '2' && choice != '3');
}

void info(int rents) {

	string author, title, rental, name;

	g(50, 3); cout << " Rent Book" << endl;
	if (rents < 30) {


		g(40, 7); cout << "Enter Your Name: " << endl;;

		g(40, 8); cout << "Enter the author of the book: " << endl;

		g(40, 9); cout << "Enter the title of the book: " << endl;

		g(40, 10); cout << "How long are you gonna rent the book?: " << endl;

		g(58, 7); getline(cin, name);
		g(69, 8); getline(cin, author);
		g(69, 9); getline(cin, title);
		g(78, 10); getline(cin, rental);

		users[rents].name = name;
		users[rents].author = author;
		users[rents].title = title;
		users[rents].rental = rental;


		Summary_Record.open("Renting_Record.txt", ios::app);
		if (!Summary_Record) {
			cout << "Cannot Create File";
		}
		else {
			g(5, 23); cout << "File Created";

			Summary_Record << name << endl;
			Summary_Record << author << endl;
			Summary_Record << title << endl;
			Summary_Record << rental << endl;
			Summary_Record.close();

		}
		incre(rents);
		g(5, 25); cout << "RENT SUCCESSFULLY!" << endl;
		g(5, 27); cout << "Press any key to continue . . . " << endl;

		_getch();
		summary();

	}
	else {

		g(5, 25); cout << "YOU HAVE REACHED THE MAXIMUM NUMBERS OF RENT INFO TO BE ADDED" << endl;
		g(5, 27); cout << "Press any key to continue . . . " << endl;

		_getch();
		summary();
	}

}

void deleteinfo(int rents) {
	string delname;
	char x = 0, y = 1;
	char choice = ' ';
	int options = 2;
	g(50, 3); cout << "DELETE INFORMATION\n\n";
	if (rents == 0) {
		cout << "THERE IS NO INFORMATION TO DELETE!\n\nPress any key to continue . . .";
		_getch();
		summary();
	}
	g(40, 5); cout << "Enter Name of the Borrower: ";
	g(68, 5); getline(cin, delname);
	for (int j = 0; j < rents; j++) {
		if (users[j].name == delname) {
			g(50, 3); cout << "INFORMATION FOUND" << endl;

			g(50, 7);  cout << "RENT DETAILS" << endl;

			g(40, 9); cout << "Name of Borrower: " << users[j].name << endl;
			g(40, 10); cout << "Author of the Book: " << users[j].author << endl;
			g(40, 11); cout << "Title of the Book: " << users[j].title << endl;
			g(40, 12); cout << "Duration of Renting: " << users[j].rental << endl;


			do {
				g(45, 18); cout << "Do you want to delete" << endl;
				for (int i = 1; i <= options; i++) {
					if (i == y) {
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
						cout << " ";
					}
					else {
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
						cout << " ";
					}
					if (i == 1) {
						if (i == y)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
						g(40, 20); cout << "[ Yes ]" << endl;
					}
					else if (i == 2) {
						if (i == y)
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
						g(60, 20); cout << "[ No ]" << endl;
					}
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

				g(45, 12); cout << "Use arrow keys to select" << endl;

				switch (_getch()) {
				case 75:
					if (y > 1)
						g(x, y);
					cout << "  ";
					y--;
					break;
				case 77:
					if (y < options)
						g(x, y);
					cout << "  ";
					y++;
					break;
				case 13:
					if (y == 1) {
						system("cls");
						choice = '1';

						users[j].name = (" ");
						users[j].title = (" ");
						users[j].author = (" ");
						users[j].rental = (" ");



						for (int b = j; b < rents - 1; b++) {
							users[b] = users[b + 1];
						}
						decre(rents);
						rents--;

						Summary_Record.open("D:\\Renting_Record.txt", ios::out);
						if (Summary_Record.is_open()) {
							for (int k = 0; k < rents; k++) {

								Summary_Record << users[k].name << endl;
								Summary_Record << users[k].title << endl;
								Summary_Record << users[k].author << endl;
								Summary_Record << users[k].rental << endl;
							}
							Summary_Record.close();
						}
						else {
							g(50, 26); cout << "Error opening file!";
						}

						g(5, 25); cout << "RENTAL INFO DELETED SUCCESSFULLY!" << endl;
						g(5, 27); cout << "Press any key to continue . . .";
						_getch();
						summary();
						return;

					}
					else if (y == 2) {
						system("cls");
						choice = '2';
						summary();
						return;
					}
					break;
				}
				if (y < 1) {
					y = 2;
				}
				else if (y > options) {
					y = 1;
				}
			} while (choice != '2');
		}
	}
	cout << "\nINFORMATION NOT FOUND!\n\nPress any key to continue . . .";
	_getch();
	summary();
}


void viewuser(int rents)
{
	cout << "NUMBER OF USERS\n\n" << endl;

	ifstream Summary_Record("D:\\Renting_Record.txt");
	if (Summary_Record.is_open()) {
		string author, title, rental, name;
		int count = 1;
		while (getline(Summary_Record, name)) {
			getline(Summary_Record, author);
			getline(Summary_Record, title);
			getline(Summary_Record, rental);

			cout << "RENT DETAILS " << count << " DETAILS\n\n";
			cout << "Name of Borrower: " << name << endl;
			cout << "Author of the Book: " << author << endl;
			cout << "Title of the Book: " << title << endl;
			cout << "Duration of Renting: " << rental << endl << endl;

			count++;
		}
		Summary_Record.close();
	}
	else {

		cout << "Unable to open file!" << endl;
	}
	cout << "Press any key to continue . . .";
	_getch();
	summary();

}

bool Help1() {

	system("cls");
	int x = 0, y = 1;
	char choice = ' ';
	const int options = 3;

	do {
		system("cls");
		helpborder1();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		g(29, 4); cout << "[ HELP ]" << endl;

		g(10, 21); cout << "Welcome to the Help section. Here, you can find information on how to use the program effectively." << endl;
		g(10, 22); cout << "If you encounter any issues or have questions about specific features, please refer to the following:" << endl;
		g(10, 23); cout << "1. To add a new book to the collection, select Option 1 from the main menu and follow the prompts." << endl;
		g(10, 24); cout << "2. To search for book information, choose Option 2 and enter relevant keywords or criteria." << endl;
		g(10, 25); cout << "3. Option 3 provides a Summary Status Report, giving an overview of the library's current status." << endl;
		g(10, 26); cout << "4. If you need further assistance, please contact the library staff for support." << endl;

		Booktwo();
		chain();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		borderl();

		for (int i = 1; i <= options; i++) {
			if (i == y) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout << " ";
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout << " ";
			}
			if (i == 1) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				g(68, 10); cout << ">>> About system <<< " << endl;
			}
			else if (i == 2) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				g(68, 13); cout << ">>> Help option  <<< " << endl;
			}
			else if (i == 3) {
				if (i == y)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				g(72, 16); cout << ">>> Back <<< " << endl;
			}

		}
		switch (_getch()) {
		case 72:
			if (y > 1)
				g(x, y);
			cout << "  ";
			y--;
			break;
		case 80:
			if (y < options)
				g(x, y);
			cout << "  ";
			y++;
			break;
		case 13://enter key
			if (y == 1) {
				system("cls");
				choice = '1';


			}
			else if (y == 2) {
				system("cls");
				choice = '2';
				text1();
			}
			else if (y == 3) {
				system("cls");
				choice = '3';
				return true;
			}
			break;
		}
		if (y < 1) {
			y = 3;
		}
		if (y > options) {
			y = 1;
		}

	} while (choice != '3');
	return false;
}
void text1() {
	Border1();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	g(50, 4); cout << "Book Collection Record" << endl;
	g(25, 6); cout << " To add a new book to the collection, enter the following information: " << endl;
	g(25, 7); cout << "1.Title, Author, Year, Availability, Location, and Call Number.   " << endl;
	g(25, 8); cout << "2.Option 2, In this option you can delete the information that you added." << endl;
	g(25, 9); cout << "3.Option 3, In this option you can edit the information that you added." << endl;
	g(25, 10); cout << "4.Option 4, In this option you can view all the books that you added. " << endl;

	g(50, 13); cout << "Search Book Information" << endl;
	g(25, 15); cout << "To search for book information, enter the title or the author of the book. " << endl;
	g(50, 18); cout << "Summary Status Report" << endl;
	g(19, 21); cout << "In this option, You can view the status report by number of the user or borrower of the books. " << endl;

	g(50, 25); cout << "Press any key to continue" << endl;
	_getch();
}