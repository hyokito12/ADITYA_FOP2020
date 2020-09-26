#include<iostream>
using namespace std;

int main(){
  // Variable declaration
  double diameter = 10.0, pi = 3.14;
  double radius = diameter/2;

  // Display output
  cout  << "The area of circle: " << pi * radius * radius
        << endl

        << "The circumference of circle: " 
        << pi * diameter << endl;
}