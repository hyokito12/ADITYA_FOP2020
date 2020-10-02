#include <iostream>
using namespace std;

int main()
{
  // Variable declaration
  int num;

  // User input
  cout << "Give me a number!\n";
  cin >> num;

  // Check num and display output
  if (num % 2 == 0)
  {
    cout << "Your number is even !\n";
  }
  else
  {
    cout << "Your number is odd!\n";
  }
}