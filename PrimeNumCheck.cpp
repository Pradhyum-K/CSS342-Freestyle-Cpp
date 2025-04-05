// Pradhyum Kaundinya
// This program check whether a number is prime or not

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
    cout << "PASS!";
  }

  if (num <= 1) {
    cout << "FAIL!";
  }

  if (num % 2 == 0) {
    cout << "FAIL!";
  }

  else {
    for (int i = 3; i <= sqrt(num); i += 2) {
      if (num % i == 0) {
        cout << "FAIL!" << "\n";
        return;
      }
    }

    cout << "PASS!" << "\n";
  }
}

void test() {

  // 8: FAIL
  // 33: FAIL
  // 19: PASS
  // 17: PASS
  // PASS means the number is prime and FAIL means the number isn't

  isPrime(8);
  isPrime(33);
  isPrime(19);
  isPrime(17);

}