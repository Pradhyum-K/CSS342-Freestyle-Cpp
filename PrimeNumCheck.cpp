#include <string>
#include <iostream>
using namespace std;

void isPrime(int num);
void test();

int main() {
  test();
  return 0;
}

void isPrime(int num) {
  if (num == 2) {
    cout << "PASS!" << "\n";
  }

  if (num <= 1) {
    cout << "FAIL!" << "\n";
  }

  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      cout << "FAIL!" << "\n";
    }

    else {
      isPrime(num / i);
      cout << "PASS!" << "\n";
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
  // PASS means the number is prime and FAIL means the number isn't prime

  for (int i = 0; i < 6; i++) {
    isPrime(i);
  }
}