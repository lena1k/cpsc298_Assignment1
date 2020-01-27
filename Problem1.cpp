// Lena Khalidi
// Problem 1: cereal

#include <iostream>
using namespace std;
int main(){
  // declare variables
  float weight = 0.0;
  float ounces = 0.0;
  float metricTon = 35273.92;

  // prompt user for weight in ounces
  cout << "What is the weight of a package of breakfast cereal (ounces): ";
  cin >> ounces;

  // calculate in tons
  float ton = ounces/ metricTon;

  // calculate boxes
  float boxes = metricTon / ounces;

  //print results
  cout << "The weight in metric tons: " << ton << endl;
  cout << "The number of boxes needed to yield one metric ton of cereal: " << boxes << endl;
  return 0;
}
