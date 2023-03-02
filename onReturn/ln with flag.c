#include <stdio.h>
#include <math.h>

double ln(double x, int i) {
    static double sum = 0;
    static int flag = 0;
    double res, calc;

    if (i == 1) {
        res = x;
        flag++;
    }

    else {
        calc = -x * (i - 1) / i;
        flag++;
        res = ln(x, i - 1) * calc;
    }
    sum += res;

    if (flag == i) return sum;
    else return res;
}

int main() {
    printf ("result = %f\n", ln(0.5, 18));
    printf ("library result = %f", log(1.5));
    return 0;
}
