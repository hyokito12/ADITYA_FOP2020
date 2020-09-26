#include<iostream>
using namespace std;

int main(){
  // Variable declaration
  double num1 = 17, num2 = 23, num3 = 49, total, average;

  // Do operation
  total = num1 + num2 + num3;
  average = total / 3;
  
  // Display output
  cout  << "The average between three numbers is "
        << average;
}