#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    switch(operation) {
        case '+':
            std::cout << "Результат: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Результат: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Результат: " << num1 * num2 << std::endl;
            break;
        case '/':
            if(num2 != 0)
                std::cout << "Результат: " << num1 / num2 << std::endl;
            else
                std::cout << "Ошибка: деление на ноль невозможно." << std::endl;
            break;
        default:
            std::cout << "Ошибка: неверная операция." << std::endl;
            break;
    }

    return 0;
}
