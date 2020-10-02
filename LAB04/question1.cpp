#include<iostream>
using namespace std;

int main(){
    // Variable Declaration
    int inputAge;

    // Display for User Input
    cout << "Input your age: ";
    cin >> inputAge;

    // Check Age
    if (inputAge < 0){
        cout << "Are you time traveler?\n";
    } else if (inputAge < 12){
        cout << "Wow, a cute child.\n";
    } else if (inputAge <= 18){
        cout << "You're a teenager.\n";
    } else{
        cout << "You're old. Get a job!\n";
    }

    return 0;
}