#include<iostream>
using namespace std;

int main(){
  // Variable declaration
  int time1 = 14, time2 = 21;
  int formattedTime1, formattedTime2;

  // Do formatting
  formattedTime1 = time1 % 12;
  formattedTime2 = time2 % 12;

  // Display output
  cout << time1 << ":00 is equal to " << formattedTime1 << ":00 PM\n";
  cout << time2 << ":00 is equal to " << formattedTime2 << ":00 PM\n";
}