#include <iostream>
#include <string>
#include <sstream>  // Заголовочный файл (std::ostringstream)
std::string reverseListNums(int x) 
{
    std::ostringstream result; 
    for (int i = x; i >= 0; --i) {
        result << i; // Добавляем текущее число в поток
        if (i > 0) {
            result << " "; 
        }
    }
    return result.str(); // Возвращаем сформированную строку
}
int main() 
{
    int x;
    std::cout << "Введите число: ";
    std::cin >> x;
    if (std::cin.fail() || x < 0) {
        std::cerr << "Ошибка: введите целое положительное число" << std::endl;
        return 1; 
    }
    std::string result = reverseListNums(x); 
    std::cout << result << std::endl;
    return 0;
}
