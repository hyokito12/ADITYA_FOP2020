#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
  // Variable declaration
  srand(time(NULL));
  int randomNumber = rand() % 100 + 1;  // Random Number 1 - 100
  int guessNumber;                     // User's number

  // Display prompt
  cout  << "Welcome to Guessing Number Game!\n"
        << "I will choose a number between 1 - 100 and you should guess it.\n\n"
        << "Now, What is my number? ";
  // Ask the number
  cin   >> guessNumber;

  // Check the number
  if (guessNumber < 1 || guessNumber > 100){
    cout << "Don't you know the meaning of 'between 1 - 100', bro?\n";
  } else if (guessNumber > randomNumber){
    cout << "Nope, your number is too high from mine.\n";
    cout << "My number is " << randomNumber << endl;
  } else if (guessNumber < randomNumber){
    cout << "Sorry bro, too low.\n";
    cout << "My number is " << randomNumber << endl;
  } else if (guessNumber == randomNumber){
    cout << "Are you a magician? It's absolutely correct!\n";
    cout << "My number is " << randomNumber << endl;
  } else {
    cout << "I don't wanna play with you anymore, bro\n";
  }
}