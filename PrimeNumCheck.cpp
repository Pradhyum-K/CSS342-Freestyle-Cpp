#include <iostream>


#include <string>
using namespace std;

bool isPrime(int num);
void test();

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

void test() {

  // 2: PASS
  // 3: PASS
  // 7: PASS
  // 1: FAIL
  // 4: FAIL
  // 8: FAIL
  // PASS means the number is prime and FAIL means the number isnt prime

  cout << isPrime(2);
  cout << isPrime(3);
  cout << isPrime(7);
  cout << isPrime(1);
  cout << isPrime(4);
  cout << isPrime(8);



}