/*
Question Three:
In recent army recruitment, recruits were manually admitted to KDF based on the following 
criteria;
i. Height should be not less than 5.4 feet
ii. Weight should not be less than 55 kg
iii. And they should be Kenyan citizens aged 18 and above
iv. Have no criminal record
If none of these criteria is met, they are sent back and told to try again next time. i.e. “Not Qualified, 
Try Next Time” and if ALL the criteria are met, “Congratulations, Welcome to the Kenya Defense 
Forces”. As a computer programmer, write the code in C++ to actualize the process.
*/

// KDF Recruitment Criteria
#include <iostream>
using namespace std;

int main() {
    float height, weight;
    int age;
    char citizen, criminal;

    cout << "Enter height (ft): ";
    cin >> height;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter age: ";
    cin >> age;
    cout << "Are you a Kenyan citizen? (y/n): ";
    cin >> citizen;
    cout << "Any criminal record? (y/n): ";
    cin >> criminal;

    if (height >= 5.4 && weight >= 55 && age >= 18 &&
        (citizen == 'y' || citizen == 'Y') &&
        (criminal == 'n' || criminal == 'N')) {

        cout << "Congratulations, Welcome to the Kenya Defense Forces";
    } else {
        cout << "Not Qualified, Try Next Time";
    }

    return 0;
}
