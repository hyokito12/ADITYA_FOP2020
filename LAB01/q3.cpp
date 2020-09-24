#include<iostream>
using namespace std;

int main(){
  // Variable declaration
  int num1 = 7, num2 = 4, tempNum;

  // Display output
  cout  << "Before" << endl
        << "num1: " << num1 << endl
        << "num2: " << num2 << endl;
  
  // Do swap here
  tempNum = num1;
  num1 = num2;
  num2 = tempNum;

  // Display output
  cout  << "After" << endl
        << "num1: " << num1 << endl
        << "num2: " << num2 << endl;
}