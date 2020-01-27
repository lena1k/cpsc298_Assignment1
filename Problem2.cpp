// Lena Khalidi
// Problem 1: firecapacity

#include <iostream>
using namespace std;
int main(){

  // declare variables
  int excludedPeople;
  int maxRoomCap;
  int peopleAttending;

  // prompt user for max room capacity
  cout << "What is the maximum room capacity? ";
  cin >> maxRoomCap;

  // prompt user for number of people attending
  cout << "How many people are attending the meeting? ";
  cin >> peopleAttending;

  // if people attending exceeds room capcity
  if(peopleAttending > maxRoomCap) {
    excludedPeople = peopleAttending - maxRoomCap;
    cout << "The meeting cannot be held as planned due to fire regulations." << endl;
    cout << excludedPeople << " people did to be exluded in order to meet the fire regulations." << endl;
  }
  // if people attending meets room capacity
  else {
    cout << "The meeting meets fire regulation standards." << endl;

  }
  return 0;
}
