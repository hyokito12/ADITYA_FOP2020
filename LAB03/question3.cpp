#include<iostream>
using namespace std;

int main(){
  // Variable Declaration
  char userChar;

  // Ask for input
  cout  << "Welcome to Vowel checker!\n"
        << "Input your character: ";
  cin   >> userChar;

  // Check input and give output
  if (isalpha(userChar)){
    if(userChar == 'a' || userChar == 'i' || userChar == 'u' || userChar == 'e' || userChar == 'o'){
      cout << "Your character is vowel.\n";
    } else{
      cout << "Your character is consonant.\n";
    }
  } else {
    cout << "Your input is invalid.\n";
  }

}