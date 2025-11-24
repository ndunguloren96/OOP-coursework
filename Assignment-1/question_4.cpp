/*
Question Four:
The figure below shows an open cylinder. Write a C++ program that will implement a class name 
cylinder with the appropriate dimensions only. The program should determine and output the 
volume of the cylinder.
Volume = πr²h
Where r is the radius of the cylinder base and h is the height of the cylinder. Use 3.142 for π.
*/

#include <iostream>
using namespace std;

class Cylinder {
private:
    float r, h;

public:
    void input() {
        cout << "Enter radius: ";
        cin >> r;
        cout << "Enter height: ";
        cin >> h;
    }

    float volume() {
        return 3.142 * r * r * h;
    }
};

int main() {
    Cylinder c;
    c.input();

    cout << "Volume of Cylinder = " << c.volume() << endl;

    return 0;
}
