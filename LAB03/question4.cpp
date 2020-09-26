#include<iostream>
using namespace std;

int main(){
  // Variable declaration
  double num1, num2;
  char userChoice;

  // Display user's choices
  cout  << "Welcome to simple arithmatic calculator!\n"
        << "Input your first number: ";
  cin   >> num1;
  cout  << "Input your second number: ";
  cin   >> num2;
  cout  << "Choose your arithmatic operation (a/s/m/d): ";
  cin   >> userChoice;

  // Check user's choices and do the operation
  if (userChoice == 'a'){
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  } else if (userChoice == 's'){
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  } else if (userChoice == 'm'){
    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
  } else if (userChoice == 'd'){
    if (num2 == 0){
      cout << "Warning! Division by zero.\n";
    } else {
      cout << num1 << " : " << num2 << " = " << num1 / num2 << endl;
    }
  } else{
    cout << "Your arithmatic input is wrong. Try again!\n";
  }
}