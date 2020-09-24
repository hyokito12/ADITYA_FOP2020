#include<iostream>
using namespace std;

int main(){
  // Declaration of Variable
  int age;

  // Input value
  cout << "Input your age this year: ";
  cin >> age;

  // Output value
  cout << "Your age next year: " << ++age << endl;
  cout << "Your age last year: " << --age - 1 << endl;

  return 0;
}