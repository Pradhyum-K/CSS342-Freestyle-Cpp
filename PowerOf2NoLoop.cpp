

#include <iostream>
#include <string>
using namespace std;


void is_power_of_2(int num);

int main() {
  int input = 5;
  is_power_of_2(input);
  return 0;
}

void is_power_of_2(int num) {
  if (num == 0) {
    cout << "FAIL";
  }

  else if (num == 1) {
    cout << "PASS";
  }


  else if (num > 1) {
    if (num % 2 == 0) {
      cout << "PASS";
    }

    else {
      cout << "FAIL";
    }
  }
}