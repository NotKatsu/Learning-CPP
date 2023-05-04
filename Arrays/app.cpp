#include <iostream>
// #include "./arrays/arrays.h"


int* get_array() {
    static int my_array[] = {1, 2, 3, 4, 5};

    return my_array;
}

int main() {
    int* number_array = get_array();

    for (int i = 0; i < 5; i++) {
        std::cout << number_array[i] << " "; // print the values in the array
    }

    return EXIT_SUCCESS;
}