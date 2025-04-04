// Pradhyum Kaundinya
// 4/2/2025
// This program takes in a fraction as input and reduces the fraction completely

#include <iostream>
#include <string>
#include <iostream>
using namespace std;

void test();
void reduce (int a, int b); // a/b
class Fraction;
Fraction reduce(Fraction input);

// **MY CODE**

// void reduceFraction(int numerator, int denominator);
// int findGCD(int numerator, int denominator);

class Fraction {
public:
  int numerator;
  int denominator;

  Fraction(int numerator, int denominator) {
    this-> numerator = numerator;
    this-> denominator = denominator;
  }

  string to_string() {
    return std:: to_string(numerator) + "/" + std:: to_string(denominator);
  }

  // Operator overload
  bool operator == (Fraction &other) {
    return this -> numerator == other.numerator
                   && this -> denominator == other.denominator;
  }

};

int main() {

  // **MY CODE**

  /*cout << "Enter a numerator (integer): ";
  int numerator = 0;
  cin >> numerator;

  cout << "Enter a denominator (integer): ";
  int denominator = 0;
  cin >> denominator;

  cout << "The reduced fraction is: ";

  reduceFraction(numerator, denominator);
  return 0;*/

  // Fraction frac1(2, 4);
  // cout << frac1.to_string();
  test();
  return 0;
}

// **MY CODE**

/*int findGCD(int numerator, int denominator) {
  while (denominator != 0) {
    int remainder = numerator % denominator;
    numerator = denominator;
    denominator = remainder;

    if (denominator == 0) {
      return numerator;
    }
  }
}

// **MY CODE**

void reduceFraction(int numerator, int denominator) {
  int gcd  = findGCD(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
  cout << numerator << "/" << denominator;
}*/


Fraction reduce(Fraction input) {
  int divider = 2;
  while (divider <= input.numerator && divider <= input.denominator) {
    if (input.denominator % divider == 0 && input.numerator % divider == 0) {
      input.numerator /= divider;
      input.denominator /= divider;
      continue;
    }

    divider++;
  }

  return input;
}

void test() {



  // 2/4 = 1/2
  // 6/6 = 1
  // 3/2 = 3/2
  // -3/2 = -3/2

  // Given an input, the actual output should match the expected output
  Fraction inputs[4] = {Fraction(1, 2),
                        Fraction(2, 4),
                        Fraction(4, 2),
                        Fraction(6, 8)};


  Fraction outputs[4] = {Fraction(1, 2),
                         Fraction(1, 2),
                         Fraction(2, 1),
                         Fraction(3, 4)};

  // Call the function
  for (int i = 0; i < 4; i++) {
    Fraction input = inputs[i];
    Fraction expect = reduce(outputs[i]);
    Fraction actual = reduce(input);

    if (expect == actual) {
      std:: cout << "PASS" << std:: endl;
    }

    else {
      std:: cout << "FAIL, case is: " << input.to_string() << std:: endl;
    }
  }
}









