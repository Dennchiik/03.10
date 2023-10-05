#include <iostream>

void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; i++) {
        *destination = *source;
        source++;
        destination++;
    }
}

int main() {
    int sourceArray[] = { 1, 2, 3, 4, 5 };
    int destinationArray[5];

    copyArray(sourceArray, destinationArray, 5);

    for (int i = 0; i < 5; i++) {
        std::cout << destinationArray[i] << " ";
    }

    return 0;
}
