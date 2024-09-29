#include <iostream>
bool isDivisor(int a, int b) 
{
  if (a % b == 0) // Проверка делимости a на b
  {
    return true; 
  }
  if (b % a == 0) // Проверка делимости b на a
  {
    return true; 
  }
  return false;  // Если нет делимости
}
int main() 
{
  int a, b;
  std::cout << "Введите 1-ое число (a): ";
  std::cin >> a;
  std::cout << "Введите 2-ое число (b): ";
  std::cin >> b;
  if (isDivisor(a, b)) 
  {
    std::cout << "true" << std::endl;
  } else 
  {
    std::cout << "false" << std::endl;
  }
  return 0;
}
