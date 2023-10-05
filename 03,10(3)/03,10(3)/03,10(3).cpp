#include <iostream>

void copyArrayReversed(int* source, int* destination, int size) {
    source += size - 1;
    for (int i = 0; i < size; i++) {
        *destination = *source;
        source--;
        destination++;
    }
}

int main() {
    int sourceArray[] = { 1, 2, 3, 4, 5 };
    int destinationArray[5];

    copyArrayReversed(sourceArray, destinationArray, 5);

    for (int i = 0; i < 5; i++) {
        std::cout << destinationArray[i] << " ";
    }

    return 0;
}
