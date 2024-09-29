#include <iostream>
#include <limits>
int findLast(int arr[], int size, int x) {
    int lastIndex = -1;  // Индекс последнего вхождения
    for (int i = 0; i < size; ++i) {  // Принимаем массив, размер и х
        if (arr[i] == x) {
            lastIndex = i;  // Обновляем индекс, если находим x
        }
    }
    return lastIndex;  
}
int main() {
    int size, x;
    std::cout << "Введите размер массива: ";
    while (!(std::cin >> size) || size <= 0) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка: введите целое положительное число: ";
    }
    int* arr = new int[size];  // Создаем массив динамически
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        while (!(std::cin >> arr[i])) {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите целое число: ";
        }
    }
    std::cout << "Введите число для поиска в массиве: ";
    while (!(std::cin >> x)) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка: введите целое число: ";
    }
    int index = findLast(arr, size, x);
    std::cout << (index != -1 ? "Последнее вхождение: " + std::to_string(index) : "Число не найдено или некорректный ввод") << std::endl;
    delete[] arr;  // Освобождаем память
    return 0;
}
