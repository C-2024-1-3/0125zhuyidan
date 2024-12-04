#include <iostream>
#include <algorithm>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    std::cout << "请输入数组元素个数: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "请输入 " << size << " 个整数: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    sortArray(arr, size);

    std::cout << "排序后的数组元素为: ";
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}