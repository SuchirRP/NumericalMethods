#include "bisection_method.h"

long double f(long double x) {
    return (x*x - 2*x);
}

long double f_der(long double x) {
    return (2*x - 2);
}
long double bisection_method(long double LHL, long double RHL, int nmax, long double tol) {
    long double a = LHL, b = RHL, c;

    if (f(a)*f(b) > 0) {
        return OUT_OF_RANGE;
    }

    long double error = b - a;
    for (int i = 0; i < nmax; i++) {
        error /= 2;
        c = a + error;
        //printf("n = %d, c = %Lf, fc = %Lf, error = %Lf \n", i, c, f(c), error);
        if (fabsl(error) < tol) {
            //printf("Convergance! \n");
            return c;
        }

        if(f(a)*f(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    return c;
}
