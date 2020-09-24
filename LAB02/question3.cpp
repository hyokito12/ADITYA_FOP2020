#include<iostream>
using namespace std;

int main(){
  // Variable Declaration
  float radius, pi = 3.14, surfaceArea, volume;

  // Input Variable
  cout << "Input the radius of sphere: ";
  cin >> radius;
  
  // Volume and Surface Area formula
  volume = (4/3) * pi * radius * radius * radius;
  surfaceArea = 4 * pi * radius * radius;

  // Output
  cout << "Sphere's volume: " << volume << endl;
  cout << "Sphere's surfece area: " << surfaceArea << endl;

  return 0;
}