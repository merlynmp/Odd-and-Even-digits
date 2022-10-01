#include <iostream>
using namespace std;
int main() {

  // used to get digits in integer
  int x;
  int y;

  // counts number of even and odd digits
  int oddCount = 0;
  int evenCount = 0;

  // user input
  cout << "Enter a four-digit number: ";
  cin >> x;

  // if the number is not a 4 digit number, terminate the program
  if (x <= 999 || x > 9999) {
    cout << "This is not a four digit number!";
    return 0;
  }

  // while the integer is greater than 0, get the last digit and determine if it
  // is even or odd. Keep count, and get rid of the last digit afterwards.
  while (x > 0) {
    y = x % 10;
    if (y % 2 != 0) {
      oddCount = oddCount + 1;
    }
    if (y % 2 == 0) {
      evenCount = evenCount + 1;
    }
    x = x / 10;
  }

  // print results
  cout << "This number has " << oddCount << " odd digits and " << evenCount
       << " even digits.";

  return 0;
}