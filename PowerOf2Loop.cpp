// Pradhyum Kaundinya
// This program checks whether a number is a power of 2 or not

#include <iostream>
#include <string>

bool is_power_of_2(int num);
void test();


int main() {
    test();
    return 0;
}

bool is_power_of_2(int num) {
    while (num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
            continue;
        }

        else {
            return false;
        }
    }

    return true ;

}

void test() {

    // 2: PASS
    // 3: FAIL
    // 5: FAIL
    // 8: PASS

    is_power_of_2(2);
    is_power_of_2(3);
    is_power_of_2(5);
    is_power_of_2(8);

}