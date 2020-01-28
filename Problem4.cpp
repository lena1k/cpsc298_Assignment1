// Lena Khalidi
// Problem 4 - inflation

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    float inflationRate;
    int yearsFromNow;
    float costOfItem;

    // prompt user for years, cost, and inflation rate
    cout << "In how many years from now will the item be purchased? ";
    cin >> yearsFromNow;
    cout << "What is the cost of the item? ($) ";
    cin >> costOfItem;
    cout << "What is the inflation rate? (%) ";
    cin >> inflationRate;

    // inflationRate in decimal form
    inflationRate = inflationRate / 100;

    // loop to calculate the cost of the item after given years
    for(int i=0;i<yearsFromNow;++i){
      costOfItem = costOfItem + costOfItem * inflationRate;
  }

    // print result
    cout << "The price after inflation is: " << costOfItem << endl;

    return 0;
}
