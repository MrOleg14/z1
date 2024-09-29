#include <iostream>

bool isUpperCase(char x) 
{
    if (x >= 'A' && x <= 'Z') // Проверяем, находится ли буква в диапазоне
    {
    return true; // Находится
    } 
    else 
    {
    return false; // не находится
    }
}

int main(char x)
{
  std::cout << "Введите букву: ";  // Ввод пользователя
  std::cin >> x;
  if (isUpperCase(x)) 
    {
    std::cout << x << " true" << std::endl;
    } 
    else 
    {
    std::cout << x << " false" << std::endl;
    }
  return 0;
} 
