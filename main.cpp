#include "math.h"
#include <iostream>
#include <limits>

int main() {
  std::cout << "Калькулятор";

  while (true) {
    std::cout
        << "\nВведите: \n+ для сложения \n- для вычитания \n* для "
           "умножения \n/ для деления \n^ для возведения в степень\nf "
           "для вычисления факториала числа\n\nи q для выхода из программы"
        << std::endl;
    char choice;
    std::cin >> choice;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                      '\n');
      std::cout << "Некорректный ввод. Повторите попытку." << std::endl;
      continue;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (choice == 'q') {
      std::cout << "Всего доброго!" << std::endl;
      return 0;
    }
    int first = 0;
    int second = 0;
    if (choice == 'f') {
      std::cout << "Введите число" << std::endl;
      std::cin >> first;
    } else if (choice == '+' || choice == '-' || choice == '*' ||
               choice == '/' || choice == '^') {
      std::cout << "Введите: первое число" << std::endl;
      std::cin >> first;
      std::cout << "Введите: второе число" << std::endl;
      std::cin >> second;
    }

    switch (choice) {
    case '+':
      std::cout << math::add(first, second) << std::endl;
      break;
    case '-':
      std::cout << math::subtract(first, second) << std::endl;
      break;
    case '*':
      std::cout << math::multiply(first, second) << std::endl;
      break;
    case '/':
      std::cout << math::divide(first, second) << std::endl;
      break;
    case '^':
      std::cout << math::pow(first, second) << std::endl;
      break;
    case 'f':
      std::cout << math::getFactorial(first) << std::endl;
      break;
    default:
      std::cout << "Неизвестная операция. Повторите ввод." << std::endl;
      break;
    }
  }
  return 0;
}