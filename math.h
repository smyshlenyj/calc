#ifndef MATH_H
#define MATH_H
#include <string>

namespace math
{
std::string add(int first, int second);
std::string subtract(int first, int second);
std::string multiply(int first, int second);
std::string divide(int first, int second);
std::string pow(int first, int second);
std::string getFactorial(int first);
int countFactorial(int first);
}

#endif // MATH_H