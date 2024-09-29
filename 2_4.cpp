#include <iostream>
#include <string>
#include <limits> // Для сравнения (std::numeric_limits)
std::string makeDecision(int x, int y) // Сравнение чисел и форирование результата
{
    if (x > y) {
        return std::to_string(x) + " > " + std::to_string(y);
    } else if (x < y) {
        return std::to_string(x) + " < " + std::to_string(y);
    } else {
        return std::to_string(x) + " = " + std::to_string(y);
    }
}
int main() 
{
    int x, y;
    std::cout << "Введите целое число (x): ";
    while (true) {
        std::cin >> x;
        if (std::cin.fail()) {
            std::cin.clear(); // Очищаем состояние 
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем входной буфер
            std::cout << "Ошибка: введите целое число: ";
        } else {
            break; // Выходим из цикла
        }
    }
    std::cout << "Введите целое число (y): ";
    while (true) 
    {
        std::cin >> y;
        if (std::cin.fail()) 
        {
            std::cin.clear(); // Очищаем состояние
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем входной буфер
            std::cout << "Ошибка: введите целое число: ";
        } else {
            break; 
        }
    }
    std::string result = makeDecision(x, y);
    std::cout << "Результат: \"" << result << "\"" << std::endl;
    return 0;
}
