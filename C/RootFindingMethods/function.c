#include "function.h"

long double f(long double x) {
    return (x*x - 2*x);
}

long double f_der(long double x) {
    return (2*x - 2);
}
