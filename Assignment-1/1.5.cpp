// Write a C++ program to print and find the sum of first 20 prime numbers.

#include <iostream>
using namespace std;

int main() {
  int num, i, sum = 0;
  for (num = 2; num <= 20; num++) {
    for (i = 2; i <= (num / 2); i++) {
      if (num % i == 0) {
        i = num;
        break;
      }
    }
    if (i != num) {
      sum += num;
    }
  }
  cout << "Sum of 20 prime numbers is " << sum;
  return 0;
}