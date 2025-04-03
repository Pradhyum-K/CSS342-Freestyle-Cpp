// Pradhyum Kaundinya
// 4/2/2025
// This program takes in a fraction as input and reduces the fraction completely

#include <iostream>
using namespace std;

void reduceFraction(int numerator, int denominator);
int findGCD(int numerator, int denominator);

int main() {
  cout << "Enter a numerator (integer): ";
  int numerator = 0;
  cin >> numerator;

  cout << "Enter a denominator (integer): ";
  int denominator = 0;
  cin >> denominator;

  cout << "The reduced fraction is: ";

  reduceFraction(numerator, denominator);
  return 0;
}

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

void reduceFraction(int numerator, int denominator) {
  int gcd  = findGCD(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
  cout << numerator << "/" << denominator;
}*/









