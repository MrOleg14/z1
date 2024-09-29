#include <iostream>
#include <vector>
#include <cstdlib> // std::abs
#include <limits>  // std::numeric_limits
int maxAbs(const std::vector<int>& arr) {  // Принимаем числа
    if (arr.empty()) {
        throw std::invalid_argument("Массив пуст");
    }
    int max_value = arr[0];  // Проверяем, есть ли вообще числа в массиве 
    for (int num : arr) {
        if (std::abs(num) > std::abs(max_value)) {
            max_value = num;
        }
    }
    return max_value;
}
int main() {
    int n;
    std::cout << "Введите количество элементов массива: ";
    while (!(std::cin >> n) || n <= 0) {
        std::cout << "Ошибка: введите положительное целое число: ";
        std::cin.clear(); // Сброс состояния потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорим неправильный ввод
    }
    std::vector<int> arr(n);
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        while (!(std::cin >> arr[i])) {
            std::cout << "Ошибка: введите целое число: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    try {
        int result = maxAbs(arr);
        std::cout << "Наибольшее значение: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
