
#include <iostream>
#include "Opening.cpp"
#include "gotoxy.h"
#include "Border.cpp"
#include "conio.h"
#include "Option.cpp"
#define g gotoxy

using namespace std;

bool Help();
void about();
void text();
bool Exit();


int main() {

    
    system("cls");
    ifstream Record("Book_Record.txt");
    if (Record.is_open()) {
        while (Record >> books[library].title >> books[library].author >> books[library].year >> books[library].availability >> books[library].location >> books[library].callno) {
            increment(library);
        }
        Record.close();
    }

    ifstream Summary_Record("D:\\Renting_Record.txt");
    if (Summary_Record.is_open()) {

        while (Summary_Record >> users[rents].name >> users[rents].author >> users[rents].title >> users[rents].rental) {

            incre(rents);
        }
        Summary_Record.close();
    }

start:
    system("cls");
    char x = 0, y = 0;
    string username, password;
    char i = 0;
    Border();
    bchain();
    Bookone();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    borderlog();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    g(75, 10);
    cout << "LOG IN\n";

    g(65, 13);
    cout << "Username: ";

    g(65, 16);
    cout << "Password: ";
    g(66, 13); cin >> username;

    cin.ignore();

    char a = 0;
main:
    while (true) {
        a = _getch();

        if (a == '\r')
        {
            if ((username == "Admin" && password == "Admin")) {
            Menu:
                system("cls");
                Bookone();
                Border();
                bchain();

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                char choice = ' ';
                const int OPTIONS = 5;
                int x = 0, y = 1;

                do {

                    g(72, 7);
                    cout << "Main Menu" << endl;
                    // Display menu options
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
                            cout << " 1.Book Collection Record " << endl;
                        }
                        else if (i == 2) {
                            if (i == y)
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            g(63, 14);
                            cout << " 2.Search Book Information " << endl;
                        }
                        else if (i == 3) {
                            if (i == y)
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            g(63, 18);
                            cout << " 3.Summary Status Report  " << endl;
                        }
                        else if (i == 4) {
                            if (i == y)
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            g(63, 22);
                            cout << " 4. Log out" << endl;
                        }
                        else if (i == 5) {
                            if (i == y)
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            g(63, 26);
                            cout << " 5. Exit" << endl;
                        }
                    }


                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                    g(20, 22);
                    cout << "Use arrow keys to navigate " << endl;
                    g(20, 23);
                    cout << "and press Enter key to select " << endl;

                    g(17, 2); cout << "Press F2 key to go to Help option:" << endl;


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
                            Help();
                            goto Menu;
                        }
                    }
                    else if (key == 13) { // Enter key
                        if (y == 1) {
                            system("cls");
                            choice = '1';
                            manage();

                        }
                        else if (y == 2) {
                            system("cls");
                            choice = '2';

                            searchBook(library);
                            goto main;
                        }
                        else if (y == 3) {
                            choice = '3';
                            summary();
                        }
                        else if (y == 4) {
                            choice = '4';
                            goto start;
                        }
                        else if (y == 5) {
                            system("cls");
                            choice = '5';
                            Exit();
                            goto Menu;
                        }
                    }

                } while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');
                goto main;

                break;
            }
            else if ((username == "Normaluser" && password == "12345")) {
            normaluser:
                system("cls");
                Bookone();
                Border();
                bchain();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                char choice = ' ';
                const int OPTIONS = 4;
                int x = 0, y = 1;

                do {

                    g(72, 7);
                    cout << "Main Menu" << endl;

                    // Display menu options
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
                            cout << " 1.Search Book Information " << endl;
                        }
                        else if (i == 2) {
                            if (i == y)
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            g(63, 14);
                            cout << " 2.Summary Status Report " << endl;
                        }
                        else if (i == 3) {
                            if (i == y)
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            g(63, 18);
                            cout << " 3. Log out " << endl;
                        }
                        else if (i == 4) {
                            if (i == y)
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            g(63, 22);
                            cout << " 4. Exit" << endl;
                        }

                    }


                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                    g(20, 22);
                    cout << "Use arrow keys to navigate " << endl;
                    g(20, 23);
                    cout << "and press Enter key  to select " << endl;

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
                            Help();
                            goto normaluser;      // Call displayHelp function

                        }
                    }
                    else if (key == 13) { // Enter key
                        if (y == 1) {
                            system("cls");
                            choice = '1';
                            searchBook(library);
                            goto main;


                        }
                        else if (y == 2) {
                            system("cls");
                            choice = '2';
                            summary();
                        }
                        else if (y == 3) {
                            choice = '3';
                            goto start;
                        }
                        else if (y == 4) {
                            system("cls");
                            choice = '4';
                            Exit();
                            goto normaluser;
                        }

                    }

                } while (choice != '1' && choice != '2' && choice != '3' && choice != '4');
                goto main;
                break;
            }

            else {
                g(50, 19);
                cout << "Wrong password or username, try again." << endl;
                Sleep(1000);
                system("cls");
                goto start;
            }
        }
        else if (a == '\b' && i > 0) {
            i--;
            cout << "\b \b";
            password.pop_back();
        }
        else if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
            password.push_back(a);
            i++;
            cout << "*";
        }
    }

    system("pause");

}


bool Help() {

    system("cls");
    int x = 0, y = 1;
    char choice = ' ';
    const int options = 3;

    do {
        system("cls");
        helpborder();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        g(29, 4); cout << "[ HELP ]" << endl;

        g(10, 21); cout << "Welcome to the Help section. Here, you can find information on how to use the program effectively." << endl;
        g(10, 22); cout << "If you encounter any issues or have questions about specific features, please refer to the following:" << endl;
        g(10, 23); cout << "1. To add a new book to the collection, select Option 1 from the main menu and follow the prompts." << endl;
        g(10, 24); cout << "2. To search for book information, choose Option 2 and enter relevant keywords or criteria." << endl;
        g(10, 25); cout << "3. Option 3 provides a Summary Status Report, giving an overview of the library's current status." << endl;
        g(10, 26); cout << "4. If you need further assistance, please contact the library staff for support." << endl;

        Bookone();
        bchain();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        borderlog();

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
                about();


            }
            else if (y == 2) {
                system("cls");
                choice = '2';
                text();
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

void about()
{
    Border();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    g(50, 4);
    cout << "The creators of the system";
    g(40, 6);
    cout << "Leader: Relleja, Ren Gabriel V.";
    g(40, 7);
    cout << "Members: Dela Cruz, Justine James V.";
    g(49, 8);
    cout << "Flores, Daisy Jane B.";
    g(49, 9);
    cout << "Valerio, Clyde O.";


    g(50, 11);
    cout << "Title of the system";

    g(30, 12);
    cout << "BulSu Hagonoy Campus TechBook Catalog Information System";
    g(25, 14);
    cout << "It refers to the systematic list of library items available in the library.";
    g(25, 15);
    cout << "It keeps a systematic cataloging by creating a database according ";
    g(25, 16);
    cout << "to the title, and author of the books. ";

    g(25, 18);
    cout << "The system was created in the year 2024.";




    _getch();
}

void text() {
    Border();
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


bool Exit() {

    system("cls");
    int x = 0, y = 1;
    char choice = ' ';
    const int options = 2;

    do {
        system("cls");
        bakal();
        smallb();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        g(44, 10); cout << "Do You Want to Exit?" << endl;
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
                g(40, 15); cout << "[ Yes ]" << endl;
            }
            else if (i == 2) {
                if (i == y)
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                g(60, 15); cout << "[ No ]" << endl;
            }
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        g(40, 17); cout << "Use Arrow Keys to Navigate and " << endl;
        g(40, 18); cout << "Press enter key to select" << endl;

        switch (_getch()) {
        case 75:
            if (y > 1)
                g(x, y);
            cout << " ";
            y--;
            break;
        case 77:
            if (y < options)
                g(x, y);
            cout << " ";
            y++;
            break;
        case 13:
            if (y == 1) {
                system("cls");
                choice = '1';
                exit(0);
            }
            else if (y == 2) {
                system("cls");
                choice = '2';
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
