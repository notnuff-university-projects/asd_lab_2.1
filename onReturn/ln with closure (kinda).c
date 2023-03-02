#include <stdio.h>
#include <math.h>

double ln(double x, int i, int depth) {
    static double sum = 0;
    double res, calc;
    if (i == 1) {
        res = x;
    }

    else {
        calc = -x * (i - 1) / i;
        res = ln(x, i - 1, depth) * calc;
    }
    sum += res;
    printf("sum = %f res = %f \n", sum, res);

    if (i == depth) return sum;
    return res;
}

double higherLn (double x, int i) {
    return ln(x,i,i);
}

int main() {
    printf ("result = %f\n", higherLn(0.5, 18));
    printf ("library result = %f", log(1.5));
    return 0;
}
