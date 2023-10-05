#include <iostream>

void countElements(int* arr, int size, int* negative, int* positive, int* zeros) {
    *negative = 0;
    *positive = 0;
    *zeros = 0;
    for (int i = 0; i < size; i++) {
        if (*arr < 0) {
            (*negative)++;
        }
        else if (*arr > 0) {
            (*positive)++;
        }
        else {
            (*zeros)++;
        }
        arr++;
    }
}

int main() {
    int arr[] = { -1, 0, 2, 0, -3 };
    int size = 5;
    int negative, positive, zeros;

    countElements(arr, size, &negative, &positive, &zeros);

    std::cout << "Отрицательных элементов: " << negative << std::endl;
    std::cout << "Положительных элементов: " << positive << std::endl;
    std::cout << "Нулевых элементов: " << zeros << std::endl;

    return 0;
}
