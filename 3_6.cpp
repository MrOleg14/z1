#include <iostream>
#include <limits>
bool equalNum(int x) {
    x = std::abs(x); // Ставим число в модуль
    int lastDigit = x % 10; // Берем последнюю цифру
    while (x > 0) {
        if (x % 10 != lastDigit) {
            return false; // Если какая-то цифра отличается
        }
        x /= 10; // Убираем эту цифру
    }
    return true; 
}
int main() {
    int x;
    std::cout << "Введите целое число: ";
    while (!(std::cin >> x)) {
        std::cout << "Ошибка: введите целое число: ";
        std::cin.clear(); // Сброс состояния потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорим неправильный ввод
    }
    if (equalNum(x)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
} 
