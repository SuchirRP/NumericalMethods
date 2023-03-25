#include "newtons_method.h"

long double f(long double x) {
    return (x*x - 2*x);
}

long double f_der(long double x) {
    return (2*x - 2);
}

long double newtons_method(long double x, int namx, long double tol, long double delta) {
    for (int i = 0; i < namx; i++) {
        if (fabsl(f_der(x)) < delta) {
            return SMALL_DERIVATIVE;
        }
        long double d = f(x)/f_der(x);
        x -= d;
        printf("n = %d, x = %Lf, f(x) = %Lf, fder(x) = %Lf \n", i, x, f(x), f_der(x));
        if (fabsl(d) < tol) {
            printf("convergence");
            return x;
        }
    }
    return x;
}
