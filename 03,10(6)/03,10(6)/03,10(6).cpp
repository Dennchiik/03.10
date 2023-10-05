#include <iostream>

void findMaxElement(int* arr, int size, int* maxIndex, int* maxValue) {
    *maxIndex = 0;
    *maxValue = *arr;
    for (int i = 1; i < size; i++) {
        if (*arr > *maxValue) {
            *maxValue = *arr;
            *maxIndex = i;
        }
        arr++;
    }
}

int main() {
    int arr[] = { 3, 7, 1, 9, 5 };
    int size = 5;
    int maxIndex, maxValue;

    findMaxElement(arr, size, &maxIndex, &maxValue);

    std::cout << "Индекс максимального элемента: " << maxIndex << std::endl;
    std::cout << "Значение максимального элемента: " << maxValue << std::endl;

    return 0;
}
