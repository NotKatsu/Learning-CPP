#include <iostream>
#include <string>

void output(std::string message) {
  std::cout << message << std::endl;
}

int main() {
  std::cout << "Hello World!" << std::endl;
  output("Hello World!");
}