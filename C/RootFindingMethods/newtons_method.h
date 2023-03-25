#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "errors.h"
#include "function.h"

long double f(long double x);
long double f_der(long double x);
long double newtons_method(long double x, int namx, long double tol, long double delta);
