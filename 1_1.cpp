#include <iostream>
#include <limits> // Для вычисления дробной части (std::numeric_limits)

double fraction(double x) 
{
    return x - static_cast<int>(x); // Выделяем целую часть от числа
}

int main() 
{
    double userInput;
    std::cout << "Введите вещественное число (например: 1.25): ";

    while (!(std::cin >> userInput))  // Проверка ввода
    {
        std::cout << "Ошибка: введите вещественное число" << std::endl;
        return 1;
    }

    double result = fraction(userInput);  // Вычисление и вывод дробной части
    std::cout << "Дробная часть числа " << userInput << " = " << result << std::endl;

    return 0;
}
