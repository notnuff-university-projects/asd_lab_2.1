#include <stdio.h>
#include <math.h>

double ln(double x, int i) {
    static double sum = 0;
    static int depth = 0;
    double res, calc;

    printf("sum = %f res = %f depth = %i\n", sum, res, depth);

    if (i == 1) {
        res = x;
        depth++;
    }

    else {
        calc = -x * (i - 1) / i;
        depth++;
        res = ln(x, i - 1) * calc;
    }
    sum += res;

    printf("sum = %f res = %f depth = %i\n", sum, res, depth);

    if (depth == i) return sum;
    else return res;
}

int main() {
    printf ("result = %f\n", ln(0.5, 18));
    printf ("library result = %f", log(1.5));
    return 0;
}
