#ifndef MATH_H
#define MATH_H
#include <math.h>
#include <sstream>
#include <iomanip>
#include <string>

namespace math
{
std::string add(const int& first, const int& second);
std::string substract(const int& first, const int& second);
std::string multiply(const int& first, const int& second);
std::string divide(const int& first, const int& second);
std::string pow(const int& first, const int& second);
std::string getFactorial(const int& first);
int countFactorial(const int& first);
}
#endif