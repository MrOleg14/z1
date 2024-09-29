#include <iostream>
#include <vector>
#include <limits>
int* add(int arr[], int size, int x, int pos) {
    if (pos < 0 || pos > size) return nullptr; // Проверяем правильность позиции
    int* newArr = new int[size + 1];
    for (int i = 0; i < size + 1; ++i) {  // Создаем новый массив из старого и нового эл-та
        newArr[i] = (i < pos) ? arr[i] : (i == pos) ? x : arr[i - 1];
    }
    return newArr;
}
int main() {
    const int MAX_SIZE = 10;  // Задаем размер массива
    int arr[MAX_SIZE], size, x, pos;
    std::cout << "Введите размер массива: " ;
    while (!(std::cin >> size) || size <= 0 || size > MAX_SIZE) {
        std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка. Размер должен быть < 10 : ";
    }
    std::cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; ++i) {
        while (!(std::cin >> arr[i])) {
            std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка. Введите число: ";
        }
    }
    std::cout << "Введите значение для вставки: ";
    while (!(std::cin >> x)) {
        std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка. Введите число: ";
    }
    std::cout << "Введите позицию для вставки (0 до " << size << "): ";
    while (!(std::cin >> pos) || pos < 0 || pos > size) {
        std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка. Введите позицию из диапазона: ";
    }
    int* newArr = add(arr, size, x, pos);
    if (newArr) {
        std::cout << "Новый массив: ";
        for (int i = 0; i < size + 1; ++i) {
            std::cout << newArr[i] << " ";
        }
        std::cout << std::endl;
        delete[] newArr;  // Чистим, чистим
    }
    return 0;
}
