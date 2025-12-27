#include <iostream>

// Function to check if a number is a Harshad number
bool isHarshadNumber(int number) {
  int originalNumber = number;
  int sumOfDigits = 0;

  // Calculate the sum of digits
  while (number > 0) {
    sumOfDigits += number % 10;
    number /= 10;
  }

  // If the original number is divisible by the sum of digits, it is a Harshad number
  return (originalNumber % sumOfDigits == 0);
}

// Driver program
int main() {
  // Replace this value with the number you want to check
  int number = 18;

  // Call the function to check if the number is a Harshad number
  if (isHarshadNumber(number)) {
    std::cout << number << " is a Harshad number." << std::endl;
  } else {
    std::cout << number << " is not a Harshad number." << std::endl;
  }

  return 0;
}