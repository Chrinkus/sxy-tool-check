#include "maths.hpp"

int factorial(int n)
{
    return n < 2 ? 1 : n * factorial(n - 1);
}
