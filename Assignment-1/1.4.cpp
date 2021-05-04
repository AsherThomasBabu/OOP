// Create a class in C++ having three members (an integer number, sum of digits
// ofthe number and a single digit formed by finding the sum of digits of the
// numberuntil the number is a single digit). Include appropriate functions to
// enter thenumber from user end, do calculations and displaying. Also include
// appropriate.

// constructors for initialising all members to zero.(eg: 1236, sum of digits
// =12,sum of digits as single digit =3)

// Write a main program to test the class.

#include <iostream>
using namespace std;

// Compiler version g++ 6.3.0
class Sum {
public:
  int num, sum = 0, remainder;
  Sum() {

    cout << "Enter no:";
    cin >> num;
    while (num > 0) {
      remainder = num % 10;
      sum = sum + remainder;
      num = num / 10;
    }
    cout << "Sum of the given number is:" << sum << endl;
  }

  void nxt() {
    int x, y = 0, z = sum;
    while (sum > 9) {
      x = sum % 10;
      sum = sum / 10;
      x = x + sum;
    }

    cout << "Sum of " << z << " is " << x;
  }
};

int main() {
  Sum obj;
  obj.nxt();

  return 0;
}