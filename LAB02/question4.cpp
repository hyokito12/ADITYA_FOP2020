#include<iostream>
using namespace std;

int main(){
  // Variable
  float celcius, fahrenheit;

  // Input
  cout << "The temperature in Celcius: ";
  cin >> celcius;
  
  // Formula
  fahrenheit = (celcius * 9.0) / 5.0 + 32;

  // Output
  cout << "The temperatur in Farenheit: " << fahrenheit << endl;

  return 0;
}