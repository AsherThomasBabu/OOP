// Write program to read two numbers from the key board and display the larger
// value on the screen

#include <iostream>
using namespace std;

int main() {
  int x, y;
  cout << "Enter first number: ";
  cin >> x;
  cout << "Enter second number: ";
  cin >> y;
  if (x > y) {
    cout << x << "is greater than" << y;
  } else {
    cout << y << " is greater than" << x;
  }
  return 0;
}