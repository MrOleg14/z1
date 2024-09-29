#include <iostream>
#include <sstream> // Заголовочный файл (std::ostringstream)
std::string listNums(int n) 
{
    std::ostringstream oss; // Формируем строки
    for (int i = 0; i <= n; ++i) {
        oss << i << " "; // Добавляем числа 
    }
    return oss.str();
}
int main() 
{
    int n;
    std::cout << "Введите число: ";
    std::cin >> n; 
    std::cout << listNums(n) << std::endl; 
    return 0; 
}
