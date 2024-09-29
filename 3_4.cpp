#include <iostream>
#include <limits>
int pow(int x, int y) {
    int result = 1; // Начальное значение 
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}
int main() {
    int x, y;
    std::cout << "Введите число x: ";
    while (!(std::cin >> x)) {
        std::cin.clear(); // Сбрасываем состояние потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорим ошибочный ввод
        std::cout << "Ошибка: введите целое число: ";
    }
    std::cout << "Введите степень y: ";
    while (!(std::cin >> y) || y < 0) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Ошибка: введите целое положительное число: ";
    }
    int result = pow(x, y); // Вычисление степени
    std::cout << x << "^" << y << " = " << result << std::endl;
    return 0;
}  
