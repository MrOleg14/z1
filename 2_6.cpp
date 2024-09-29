#include <iostream>
bool sum3(int x, int y, int z) 
{
    return (x + y == z) || (x + z == y) || (y + z == x); // Проверяем возможные комбинации
}
int main() 
{
    int x, y, z;
    std::cout << "Введите три числа (x, y, z): ";
    std::cin >> x >> y >> z;

    if (std::cin.fail())  // Проверка на корректность
    {
        std::cout << "Ошибка: введите целые числа" << std::endl;
        return 1; 
    }
    if (sum3(x, y, z)) 
    {
        std::cout << "true" << std::endl;
    } else 
    {
        std::cout << "false" << std::endl;
    }
    return 0;
}
