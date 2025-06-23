#include "math.h"
#include <sstream>
#include <iomanip>

namespace math {

std::string add(int first, int second) {
  std::string result = std::to_string(first) + " + " + std::to_string(second) +
                       " = " + std::to_string(first + second);
  return result;
}

std::string subtract(int first, int second) {
  std::string result = std::to_string(first) + " - " + std::to_string(second) +
                       " = " + std::to_string(first - second);
  return result;
}

std::string multiply(int first, int second) {
  std::string result = std::to_string(first) + " * " + std::to_string(second) +
                       " = " + std::to_string(first * second);
  return result;
}
std::string divide(int first, int second) {
  if (second == 0)
    return "Делить на ноль нельзя!";

  double doubleRes = static_cast<double>(first) / second;
  std::ostringstream oss;
  oss << std::setprecision(8) << std::noshowpoint << doubleRes;
  std::string str = oss.str();

  std::string result =
      std::to_string(first) + " / " + std::to_string(second) + " = " + str;
  return result;
}
std::string pow(int first, int second) {
  if (second == 0)
    return std::to_string(first) + " ^ " + std::to_string(second) + " = " + "1";
  if (second < 0)
    return "Я пока так не умею(";
  int result = first;
  for (int i = 0; i < second - 1; ++i) {
    result *= first;
  }

  return std::to_string(result);
}

std::string getFactorial(int n) {
  if (n < 0)
    return "Введите положительное число!";

  return "Факториал числа " + std::to_string(n) + " = " + std::to_string(math::countFactorial(n));
};

int countFactorial(int n) {
    if (n == 0) return 1;
    return n * countFactorial(n - 1); 
}
} // namespace math