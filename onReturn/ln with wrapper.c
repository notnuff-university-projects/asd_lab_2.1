#include <stdio.h>
#include <math.h>

struct result {
    double current;
    double sum;
};

struct result serviceLn(double x, int i, int depth) {
    struct result res;
    res.sum = 0;
    double calc;

    if (i == 1) {
        res.current = x;
    }

    else {
        calc = -x * (i - 1) / i;
        res = serviceLn(x, i - 1, depth);
        res.current *= calc;
    }

    res.sum += res.current;

    printf("sum = %f res = %f i = %i\n", res.sum, res.current, i);

    return res;
}

double ln (double x, int i) {
    return serviceLn(x, i, i).sum;
}

int main() {
    printf ("result = %f\n", ln(0.5, 5));
    printf ("library result = %f", log(1.5));
    return 0;
}
