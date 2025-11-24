/*
Question One:
Write a C++ program that will prompt the user to enter the date and year. The year Should not be 
greater than 2020 and not less than 1900 otherwise an error message should be displayed. The date 
includes day and month. The program should also check if the day entered is equal to the number 
of days in that particular month, if not so the program should then display an error message that 
the date is invalid otherwise it should display the date and year
*/

#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if (year < 1900 || year > 2020) {
        cout << "Invalid date!" << endl;
        return 0;
    }

    int daysInMonth;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31; break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30; break;
        case 2:
            daysInMonth = isLeap(year) ? 29 : 28;
            break;
        default:
            cout << "Invalid date!" << endl;
            return 0;
    }

    if (day < 1 || day > daysInMonth) {
        cout << "Invalid date!" << endl;
    } else {
        cout << "Date is valid: " << day << "/" << month << "/" << year << endl;
    }

    return 0;
}
