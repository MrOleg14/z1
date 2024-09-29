#include <iostream>

bool isPositive(int x) 
{
    return x > 0; // Возвращаем true, если x > 0, иначе false
}

int main() 
{
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (isPositive(number)) 
    {   // Проверяем и выводим введенное число
        std::cout << number << " true" << std::endl;
    } 
    else 
    {
        std::cout << number << " false" << std::endl;
    }

    return 0;
}
