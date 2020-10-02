#include<iostream>
using namespace std;

int main(){
    // Variable Declaration
    int inputMonth, inputYear;

    // Display for User Input
    cout << "Hey, I'm a month wizard. Give me a month and year then I will tell you\n"
         << "the amount of days in the month.\n";
    cout << "Input month: ";
    cin >> inputMonth;
    cout << "Input year: ";
    cin >> inputYear;

    // Check amount of days in month
    switch(inputMonth){
        case 1:
            cout << "It is January " << inputYear << " with 31 days.";
            break;
        case 5:
            cout << "It is May " << inputYear << " with 31 days.";
            break;
        default:
            cout << "Wrong input dude.";
    }

    return 0;
}