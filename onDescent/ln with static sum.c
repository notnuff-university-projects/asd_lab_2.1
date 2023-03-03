#include <stdio.h>
#include <math.h>

double serviceLn(double x, int i, double res) {
    static int depth = 1;
    static double sum = 0;
    double calc;

    if (depth + 1 == i) {
        return sum;
    }

    else {
        sum += res;
        calc = -res * x * depth / (depth + 1);
        depth++;
        res = serviceLn(x, i, calc);
    }
    printf("sum = %f res = %f \n", sum, res);
    return res;
}

double ln(double x, int i) {
    return serviceLn(x, i, x);
}

int main() {
    printf ("result = %f\n", ln(0.5, 18));
    printf ("library result = %f", log(1.5));
    return 0;
}
