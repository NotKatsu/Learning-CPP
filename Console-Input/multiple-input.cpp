#include <iostream>

int add(int number) {
  return number + 10;
}

int subtract(int number) {
  return number - 10;
}

int main() {
  int number{};

  std::cout << "Numbers (Seperated by commas): ";
  std::cin >> number;

  std::cout << add(number) << std::endl;
  std::cout << subtract(number) << std::endl;
}