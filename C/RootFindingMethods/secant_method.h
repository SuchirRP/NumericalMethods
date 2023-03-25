#include <stdio.h>
#include <math.h>

#include "errors.h"


long double f(long double x);
long double f_der(long double x);
long double secant_method(long double a, long double b, int nmax, long double tol);
