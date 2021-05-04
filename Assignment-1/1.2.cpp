// Write  program to find negative of a number

#include <iostream>
using namespace std;

// Compiler version g++ 6.3.0

int main() {
  int x, y;
  cout << "Enter the number:";
  cin >> x;
  if (x > 0) {
    y = -x;
    cout << "The negative of " << x << "is" << y;

  } else {
    y = x;
    cout << "The negative of " << x << "is" << y;
  }
  return 0;
}