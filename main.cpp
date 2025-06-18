#include "math.h"
#include <iostream>

int main() {
  std::cout << "Калькулятор";

  while (true) {
    std::cout << "\nВведите: \n+ для сложения \n- для вычитания \n* для "
                 "умножения \n/ для деления \n^ для возведения в степень\nf "
                 "для вычисления факториала числа\n\nи q для выхода из программы"
              << std::endl;
    char choice;
    std::cin >> choice;
    if (choice == 'q') {
      std::cout << "Всего доброго!" << std::endl;
      ;
      return 0;
    }

    int first = 0;
    int second = 0;
    if (choice != 'f') {
      std::cout << "Введите: первое число" << std::endl;
      std::cin >> first;
      std::cout << "Введите: второе число" << std::endl;
      std::cin >> second;
    }

    if (choice == 'f') {
      std::cout << "Введите число" << std::endl;
      std::cin >> first;
    }

    switch (choice) {
    case '+': {
      std::cout << math::add(first, second) << std::endl;
      break;
    }
    case '-': {
      std::cout << math::substract(first, second) << std::endl;
      break;
    }
    case '*': {
      std::cout << math::multiply(first, second) << std::endl;
      break;
    }
    case '/': {
      std::cout << math::divide(first, second) << std::endl;
      break;
    }
    case '^': {
      std::cout << math::pow(first, second) << std::endl;
      break;
    }
    case 'f': {
      std::cout << math::getFactorial(first) << std::endl;
      break;
    }
    }
  }
  return 0;
}