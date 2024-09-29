#include <iostream>
#include <limits>
double safeDiv(int x, int y) 
{
    if (y == 0) 
    {
        return 0.0; // Возвращаем 0, если делим на 0
    }
    return static_cast<double>(x) / y; // Возвращаем результат деления
}
int main() 
{
    int x, y;
    std::cout << "Введите x (целое число): "; // Проверяем ввод x
    while (!(std::cin >> x)) 
    {
        std::cout << "Ошибка: введите целое число";
        std::cin.clear(); // Сбрасываем состояние потока
        return 1;
    }
    // Проверка ввода для y
    std::cout << "Введите y (целое число): "; // Проверяем ввод y
    while (!(std::cin >> y)) 
    {
        std::cout << "Ошибка: введите целое число";
        std::cin.clear();
        return 1;
    }
    double result = safeDiv(x, y);
    std::cout << x << " / " << y << " = " << result << std::endl;
    return 0;
}
