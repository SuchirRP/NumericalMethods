#include "secant_method.h"
#include <math.h>
#include <stdio.h>

long double f(long double x) {
    return (x*x - 2*x);
}

long double f_der(long double x) {
    return (2*x - 2);
}

long double secant_method(long double a, long double b, int nmax, long double tol) {
    long double d;
    for (int i = 2; i < nmax; i ++) {
        if (fabsl(f(a)) > fabsl(f(b))) {
            long double temp;
            temp = a;
            a = b;
            b = temp;
        }
        d = (b - a)/(f(b) - f(a));
        b = a;
        d *= f(a);
        if (fabsl(d) < tol) {
            return d;
        }
        a -= d;
        printf("n = %d, a = %Lf, f(a) = %Lf, f_der = %Lf", i, a, f(a), f_der(a));
    }
    return d;
}
