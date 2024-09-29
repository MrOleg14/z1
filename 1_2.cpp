#include <iostream>

int sumLastNums(int a) 
{
    int lastDigit = a % 10;  // Берем последнюю цифру
    a /= 10;  // Удаляем ее
    int secondLastDigit = a % 10; // Берем предпоследнюю цифру
    return lastDigit + secondLastDigit; // Возвращаем сумму этих цифр
}

int main() 
{
    int number;
    std::cout << "Введите число (больше 2х чисел): ";
    std::cin >> number;
    if (number < 10 && number > -10)  // Проверка числа на кол-во цифр
    {
        std::cout << "Ошибка: в числе должно быть больше 2х цифр" << std::endl;
        return 1; // Выход, если ошибка
    }
    int result = sumLastNums(number);
    std::cout << "Сумма 2х конечных цифр числа " << number << " = " << result << std::endl;
    return 0;
}
