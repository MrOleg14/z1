#include <iostream>
#include <string>
#include <limits>
std::string day(int x)
{
    switch (x) {
        case 1:
            return "Понедельник";
        case 2:
            return "Вторник";
        case 3:
            return "Среда";
        case 4:
            return "Четверг";
        case 5:
            return "Пятница";
        case 6:
            return "Суббота";
        case 7:
            return "Воскресенье";
        default:
            return "Не день недели";
    }
}
int main() 
{
    int x;
    while (true) {
        std::cout << "Введите номер дня недели (1-7): ";
        std::cin >> x;

        if (std::cin.fail()) {
            std::cin.clear(); // Сброс состояния
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Удаление 
            std::cout << "Ошибка: введите целое число." << std::endl;
        } else {
            break; 
        }
    }
    std::string result = day(x);
    std::cout << result << std::endl;
    return 0;
}
