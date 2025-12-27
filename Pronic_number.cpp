#include <iostream>
#include <cmath>

// Function to check if a number is a pronic number
bool isPronic(int num) {
  int sqrtNum = std::sqrt(num);

  return (sqrtNum * (sqrtNum + 1) == num);
}

// Driver program
int main() {
  // Replace this value with your desired number
  int number = 12;

  // Check if the number is a pronic number
  if (isPronic(number)) {
    std::cout << number << " is a pronic number." << std::endl;
  } else {
    std::cout << number << " is not a pronic number." << std::endl;
  }

  return 0;
}