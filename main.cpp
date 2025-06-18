#include <iomanip>
#include <iostream>
#include <math.h>
#include <sstream>

int factorial(int n) {
  if (n < 0) {
    return 0;
  } else if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  std::cout << "Калькулятор";

  while (true) {
    std::cout << "\nВведите: \n+ для сложения \n- для вычитания \n* для "
                 "умножения \n/ для деления \n^ для возведения в степень\nf "
                 "для взятия факториала числа\n\nи q для выхода из программы"
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
      std::cout << std::to_string(first) + " + " + std::to_string(second) +
                       " = " + std::to_string(first + second)
                << std::endl;
      break;
    }
    case '-': {
      std::cout << std::to_string(first) + " - " + std::to_string(second) +
                       " = " + std::to_string(first - second)
                << std::endl;
      break;
    }
    case '*': {
      std::cout << std::to_string(first) + " * " + std::to_string(second) +
                       " = " + std::to_string(first * second)
                << std::endl;
      break;
    }
    case '/': {
      if (second == 0) {
        std::cout << "Делить на ноль нельзя!" << std::endl;
        break;
      }
      double doubleRes = double(first) / second;
      std::ostringstream oss;
      oss << std::setprecision(8) << std::noshowpoint << doubleRes;
      std::string str = oss.str();
      std::cout << std::to_string(first) + " / " + std::to_string(second) +
                       " = " + str
                << std::endl;
      break;
    }
    case '^': {
      if (second == 0) {
        std::cout << std::to_string(first) + " ^ " + std::to_string(second) +
                         " = " + "1"
                  << std::endl;
        break;
      }
      if (second < 0) {
        std::cout << "Я пока так не умею(" << std::endl;
        break;
      }
      int res = first;
      for (int i = 1; i < second; ++i) {
        res *= first;
      }

      std::cout << std::to_string(res) << std::endl;
      break;
    }

    case 'f': {
      std::cout << std::to_string(factorial(first)) << std::endl;
      break;
    }
    }
  }
  return 0;
}