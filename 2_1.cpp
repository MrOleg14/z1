#include <iostream>
int abs(int x) 
{
  if (x < 0) 
  {
    return -x; // Если x < 0, возвращаем положительное
  } 
  else 
  {
    return x; // Если x >= 0, возвращаем без изменений
  }
}
int main() 
{
  int x;
  std::cout << "Введите число: ";
  std::cin >> x;
  std::cout << "Модуль числа: " << abs(x) << std::endl;
  return 0;
}
