#include <iostream>
using namespace std;

bool isPrime(int num);

int main() {
  cout << "Enter a number: ";
  int input = 0;
  cin >> input;
  cout << isPrime(input);
  return 0;
}

bool isPrime(int num) {
  if (num == 2) {
    return true;
  }

  if (num <= 1) {
    return false;
  }

  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      // isPrime(num / i);
      return false;
    }

    else {
      isPrime(num / i);
      return true;
    }
  }
}