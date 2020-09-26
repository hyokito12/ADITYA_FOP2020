#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
  // Generate Random Number and Answer Variable
  int num1 = rand() % 10, num2 = rand() % 10;
  int answer;

  // Check the number to not give us negative answer
  if (num1 < num2){
    int tempNum = num1;
    num1 = num2;
    num2 = tempNum;
  }

  // Display the question
  cout  << "Answer this question!\n"
        << num1 << " - " << num2 << " = ";
  cin   >> answer;

  // Check the answer and display the result
  if (num1 - num2 == answer){
    cout << "Your GENIUS!\n";
  } else {
    cout << "Back to Kindergarten!\n";
  }
}