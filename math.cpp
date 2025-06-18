#include "math.h"
#include <sstream>
#include <iomanip>

namespace math {

std::string add(const int &first, const int &second) {
  std::string result = std::to_string(first) + " + " + std::to_string(second) +
                       " = " + std::to_string(first + second);
  return result;
}

std::string substract(const int &first, const int &second) {
  std::string result = std::to_string(first) + " - " + std::to_string(second) +
                       " = " + std::to_string(first - second);
  return result;
}

std::string multiply(const int &first, const int &second) {
  std::string result = std::to_string(first) + " * " + std::to_string(second) +
                       " = " + std::to_string(first * second);
  return result;
}
std::string divide(const int &first, const int &second) {
  if (second == 0)
    return "Делить на ноль нельзя!";

  double doubleRes = double(first) / second;
  std::ostringstream oss;
  oss << std::setprecision(8) << std::noshowpoint << doubleRes;
  std::string str = oss.str();

  std::string result =
      std::to_string(first) + " / " + std::to_string(second) + " = " + str;
  return result;
}
std::string pow(const int &first, const int &second) {
  if (second == 0)
    return std::to_string(first) + " ^ " + std::to_string(second) + " = " + "1";
  if (second < 0)
    return "Я пока так не умею(";
  int result = first;
  for (int i = 1; i < second; ++i) {
    result *= first;
  }

  return std::to_string(result);
}

std::string getFactorial(const int &n) {
  if (n < 0)
    return "Введите положительное число!";
  if (n == 0)
    return "Факториал числа 0 = 1";
  return "Факториал числа " + std::to_string(n) + " = " + std::to_string(math::countFactorial(n));
};

int countFactorial(const int &n) {
    if (n == 1) return 1;
    return n * countFactorial(n - 1); 
}
} // namespace math