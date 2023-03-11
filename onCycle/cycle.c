#include <stdio.h>
#include <math.h>

double ln(double x, int depth) {
    double sum = 0, calc, res;
    for (int i = 1; i <= depth; i++) {
        calc = -x * (i - 1) / i;
        res = (i != 1) ? res * calc : x;
        sum += res;

        printf("sum = %f res = %f i = %i\n", sum, res, i);
    }
    return sum;
}

int main() {
    printf ("result = %f\n", ln(0.5, 1));
    printf ("library result = %f", log(1.5));
    return 0;
}
