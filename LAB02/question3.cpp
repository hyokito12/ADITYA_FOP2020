#include<iostream>
#include<cmath>
using namespace std;

int main(){
  // Variable Declaration
  float radius, pi = M_PI, surfaceArea, volume;

  // Input Variable
  cout << "Input the radius of sphere: ";
  cin >> radius;
  
  // Volume and Surface Area formula
  volume = (4/3) * pi * pow(radius, 3);
  surfaceArea = 4 * pi * pow(radius, 2);

  // Output
  cout << "Sphere's volume: " << volume << endl;
  cout << "Sphere's surfece area: " << surfaceArea << endl;

  return 0;
}