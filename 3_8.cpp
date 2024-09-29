#include <iostream>
#include <limits> 
void leftTriangle(int x) 
{
    for (int i = 1; i <= x; ++i) {  // Добавляем звездочки в строке
        for (int j = 1; j <= i; ++j) {
            std::cout << "*"; 
        }
        std::cout << std::endl; // Переходим на новую строку
    }
}
int main() 
{
    int x;
    std::cout << "Введите целое число (высота треугольника): ";
    while (true) {
        std::cin >> x;
        if (std::cin.fail() || x <= 0) { 
            std::cin.clear(); // Сброс состояния потока
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорим неправильный ввод
            std::cout << "Ошибка: введите положительное целое число: ";
        } else {
            break;
        }
    }
    leftTriangle(x); 
    return 0;
}
