#include <iostream>

void sumAndProduct(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;
    for (int i = 0; i < size; i++) {
        *sum += *arr;
        *product *= *arr;
        arr++;
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = 5;
    int sum, product;

    sumAndProduct(arr, size, &sum, &product);

    std::cout << "Сумма элементов: " << sum << std::endl;
    std::cout << "Произведение элементов: " << product << std::endl;

    return 0;
}
