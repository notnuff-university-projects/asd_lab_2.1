#include <stdio.h>
#include <math.h>

double serviceLn(double x, int i, int depth, double res, double sum) {
    double calc;
    sum += res;

    printf("sum = %f res = %f i = %i\n", sum, res, i);

    if (i == depth) {
        return sum;
    }

    else {
        calc = -res * x * i / (i + 1);
        res = serviceLn(x, i + 1, depth, calc, sum);
    }

    return res;
}

double ln(double x, int i) {
    return serviceLn(x, 1, i, x, 0);
}

int main() {
    printf ("result = %f\n", ln(0.5, 1));
    printf ("library result = %f", log(1.5));
    return 0;
}
