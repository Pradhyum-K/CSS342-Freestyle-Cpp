// Pradhyum Kaundinya
// This program check whether a number is prime or not

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
  /*if (num == 2) {
    cout << "PASS!" << "\n";
  }

  if (num <= 1) {
    cout << "FAIL!" << "\n";
  }

  else {
    for (int i = 2; i < sqrt(num); i++) {
      if (num % i == 0) {
        cout << "FAIL!" << "\n";
      }

      else {
        cout << "PASS!" << "\n";
      }
    }
  }*/

  if (num == 2) {
    cout << "PASS!" << "\n";
  }

  if (num <= 1) {
    cout << "FAIL!" << "\n";
  }

  else {
    for (int i = 2; i <= sqrt(num); i++) {
      if (num % i == 0) {
        cout << "FAIL!" << "\n";
      }

      else {
        cout << "PASS!" << "\n";
      }
    }
  }
}

void test() {

  // 2: PASS
  // 13: PASS
  // 15: FAIL
  // 4: FAIL
  // PASS means the number is prime and FAIL means the number isn't

  isPrime(2);
  isPrime(13);
  isPrime(15);
  isPrime(4);

}