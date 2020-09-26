#include<iostream>
using namespace std;

int main(){
  // Variable declaration
  int time;

  // User input
  cout  << "What time is it? ";
  cin   >> time;

  // Check time
  if (time < 0 || time > 24){
    cout << "Where do you live bro?\n";
  } else if (time < 12){
    cout << "Good morning!\n";
  } else if (time < 18){
    cout << "Good afternoon!\n";
  } else if (time < 24){
    cout << "Good evening!\n";
  }
}