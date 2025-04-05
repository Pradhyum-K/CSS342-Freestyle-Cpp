// Pradhyum Kaundinya
// This program checks whether a number is a power of 2 or not

#include <iostream>
using namespace std;

void is_power_of_2(int num);
void test();



int main() {
    test();
    return 0;
}



void is_power_of_2(int num) {
    while (num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
        }

        else {
            cout << "FAIL!" << "\n";
            return;
        }
    }

    cout << "PASS!" << "\n";

}

void test() {

    // 4: PASS
    // 5: FAIL
    // 6: FAIL
    // 8: PASS

    is_power_of_2(4);
    is_power_of_2(5);
    is_power_of_2(6);
    is_power_of_2(8);

}