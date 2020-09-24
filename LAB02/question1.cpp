#include<iostream>
using namespace std;

int main(){
  // Declaration of Variable
  int length, width, area, perimeter;

  // Input variable
  cout << "Input rectangle's length: ";
  cin >> length;
  cout << "Input rectangle's width: ";
  cin >> width;

  // Area and Perimeter Formula
  area = length * width;
  perimeter = 2 * (length + width);

  // Output Variable
  cout << "\nYour rectangle's area: " << area;
  cout << "\nYour rectangle's perimeter: " << perimeter << endl;

  return 0;
}