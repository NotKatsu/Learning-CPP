#include <iostream>

int add(int numberOne, int numberTwo) {
  return numberOne + numberTwo;
}

int subtract(int numberOne, int numberTwo) {
  return numberOne - numberTwo;
}

int main() {
  int numberOne{};
  int numberTwo{};

  std::cout << "Number One: ";
  std::cin >> numberOne;

  std::cout << "Number Two: ";
  std::cin >> numberTwo;

  std::cout << add(numberOne, numberTwo) << std::endl;
  std::cout << subtract(numberOne, numberTwo) << std::endl;
}