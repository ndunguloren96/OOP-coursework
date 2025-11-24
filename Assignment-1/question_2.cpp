/**
Question Two:
Implement a structure with the following attributes:
- employee name
- employee number
- location
- address

Declare an array of 20 employees, then read in their values and display them.
*/

#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Employee structure
struct Employee {
    string name;
    int emp_no;
    string location;
    string address;
};

int main() {
    Employee emp[20];

    cout << " -Enter details for 20 employees- \n";

    for (int i = 0; i < 20; i++) {

        cout << "\n--- Employee " << i + 1 << " ---\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear leftover newline

        cout << "Name: ";
        getline(cin, emp[i].name);

        cout << "Employee Number: ";
        cin >> emp[i].emp_no;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Location: ";
        getline(cin, emp[i].location);

        cout << "Address: ";
        getline(cin, emp[i].address);
    }

    cout << "\n\n -Employee Details- \n";

    for (int i = 0; i < 20; i++) {
        cout << "\n--- Employee " << i + 1 << " ---\n";
        cout << "Name: " << emp[i].name << endl;
        cout << "Employee Number: " << emp[i].emp_no << endl;
        cout << "Location: " << emp[i].location << endl;
        cout << "Address: " << emp[i].address << endl;
    }

    return 0;
}
