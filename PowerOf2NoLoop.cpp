// Pradhyum Kaundinya
// This program checks if a given number is a power of 2 or not

#include <iostream>
using namespace std;


void is_power_of_2(int num);
void test();


int main() {
  test();

  return 0;
}


void is_power_of_2(int num) {
  if (num == 0) {
    cout << "FAIL" << "\n";
  }

  else if (num == 1) {
    cout << "PASS" << "\n";

  }

  else if (num > 1) {
    if (num % 2 == 0) {
      cout << "PASS" << "\n";
    }

    else {
      cout << "FAIL" << "\n";
    }
  }
}


void test() {

  // 5: FAIL
  // 4: PASS
  // 7: FAIL
  // 18: FAIL, this case is not working as intended
  // 16: PASS
  // PASS means the number is a power of 2 and FAIL means it isn't

  is_power_of_2(5);
  is_power_of_2(4);
  is_power_of_2(7);
  is_power_of_2(18);
  is_power_of_2(16);
}