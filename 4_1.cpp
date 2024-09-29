#include <iostream>
#include <limits>
int findFirst(int arr[], int size, int x) 
{
    for (int i = 0; i < size; ++i)  // Принимаем массив, размер и х
        if (arr[i] == x) return i;  // Ищем 1-ое вхождение х и возвращаем его индекс
    return -1;
}
int main() 
{
    int size, x;
    std::cout << "Введите размер массива: ";
    while (!(std::cin >> size) || size <= 0) {
        std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка: ведите целое положительное число: ";
    }
    int* arr = new int[size];  // Создаем массив динамически
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        while (!(std::cin >> arr[i])) {
            std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка: введите целое число: ";
        }
    }
    std::cout << "Введите число для поиска в массиве: ";
    while (!(std::cin >> x)) {
        std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка: ведите целое число: ";
    }
    int index = findFirst(arr, size, x);
    std::cout << (index != -1 ? "Первое вхождение: " + std::to_string(index) : "Число не найдено или некорректный ввод") << std::endl;
    delete[] arr;  // Освобождаем память
    return 0;
}
