#include <iostream>

void consoleOutput(int amount) {
    for(int count = 0; count <= amount; count++) {
      std::cout << "Hello World!" << std::endl;
    }
}

int main() {
  std::cout << "Hello World!" << std::endl;
  consoleOutput(3);
}