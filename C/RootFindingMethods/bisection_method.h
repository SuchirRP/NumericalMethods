#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "errors.h"

long double f(long double x);
long double f_der(long double x);
long double bisection_method(long double LHL, long double RHL, int nmax, long double tol);
