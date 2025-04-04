#include <iostream>
#include <string>
bool is_power_of_2(int num);

int main() {
    int num = 16;
    bool result = is_power_of_2(num);
    std:: cout << result;
    if (result == true) {
        printf("\n %d is a power of 2.", num);
    }

    else {
        printf("\n %d is not a power of 2.", num);
    }

    return 0;
}

bool is_power_of_2(int num) {
    // Keep dividing num by 2 until either 1 or nun-divisible number
    // is reached

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