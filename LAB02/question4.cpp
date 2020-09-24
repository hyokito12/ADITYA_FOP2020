#include<iostream>
using namespace std;

int main(){
  // Variable
  float celcius, farenheit;

  // Input
  cout << "The temperature in Celcius: ";
  cin >> celcius;
  
  // Formula
  farenheit = (celcius * 9.0) / 5.0 + 32;

  // Output
  cout << "The temperatur in Farenheit: " << farenheit << endl;

  return 0;
}