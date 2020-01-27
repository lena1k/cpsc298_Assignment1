// Lena Khalidi
// Problem 3 - employeepay

#include <iostream>
using namespace std;

int main(){

  // declare variables
  float  payPerHour = 16;
  float overtimeHours;
  float numHours;
  float grossPay;
  int medInsurance = 10;
  float withholdingAmnt;
  float netTakeHomePay;

  // prompt user for # of hours worked in a week
  cout << "How many hours do you work in a week? ";
  cin >> numHours;

  // calculate overtime hours if numHours > 40
  if(numHours > 40){
    overtimeHours = numHours - 40;
    grossPay = (payPerHour * numHours) + (overtimeHours * payPerHour * 0.5);
  }
  // if numHours < 40
  else {
    grossPay = (payPerHour * numHours);
  }

  // calculate net take home pay
  netTakeHomePay = grossPay - (grossPay * 0.06) - (grossPay * 0.14) - (grossPay * 0.05) - 10;
  // calculate withholding amount
  withholdingAmnt =  (grossPay *  0.06) + (grossPay * 0.14) + (grossPay * 0.05) + 10;

  // print results
  cout << "Your gross pay: " << grossPay << endl;
  cout << "Your withholding amount: " << withholdingAmnt << endl;
  cout << "Your net take-home pay: " << netTakeHomePay << endl;

  return 0;
}
