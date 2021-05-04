// Design a simple calculator with C++. You have to use minimum 4 simple class for the  implementation

#include <iostream>
using namespace std;

class Calculator {
public:
  int x, y, z;
  void get_sum() {
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;
    z = x + y;
    cout << "Sum:" << z;
  }

  void get_diff() {
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;
    z = x - y;
    cout << "Difference:" << z;
  }

  void mult() {
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;
    z = x * y;
    cout << "Product:" << z;
  }
  void div() {
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;
    z = x / y;
    cout << "Result:" << z;
  }
};

int main() {
  Calculator obj;
  int p;

  cout << "Press 1 for Addition" << endl;
  cout << "Press 2 for Subtraction" << endl;
  cout << "Press 3 for Multiplication" << endl;
  cout << "Press 4 for Division" << endl;
  cout << "Select Operation:";
  cin >> p;
  if (p == 1) {
    obj.get_sum();
  } else if (p == 2) {
    obj.get_diff();
  } else if (p == 3) {
    obj.mult();
  } else {
    obj.div();
  }
  return 0;
}