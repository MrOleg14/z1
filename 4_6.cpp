#include <iostream>
#include <limits>
void reverse(int arr[], int size) {
    int left = 0;   // 1-ый индекс
    int right = size - 1;   // Последний индекс

    while (left < right) {
        std::swap(arr[left], arr[right]); // Меняем местами элементы
        left++;  // Левый индекс - вправо
        right--;  // Правый индекс - влево
    }
}
int main() {
    int size;
    std::cout << "Введите размер массива: ";
    while (!(std::cin >> size) || size <= 0) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка: введите целое положительное число: ";
    }
    int* arr = new int[size];  // Создаем массив динамический
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i) {
        while (!(std::cin >> arr[i])) {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите целое число: ";
        }
    }
    reverse(arr, size); // Переворачиваем массив
    std::cout << "Новый массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;  // Чистим, чистим
    return 0;
}
