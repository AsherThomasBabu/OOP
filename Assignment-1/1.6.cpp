// Write a program to find square and cube of a number

#include <iostream>
using namespace std;

class Number {
public:
  int x, y;
  void square() {
    cout << "Enter the number:";
    cin >> x;
    y = x * x;
    cout << "Square of" << x << "is" << y << endl;
    y = x * x * x;
    cout << "Cube of" << x << "is" << y;
  }
};

int main() {
  Number obj;
  obj.square();
  return 0;
}