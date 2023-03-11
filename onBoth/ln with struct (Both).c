#include <stdio.h>
#include <math.h>

struct result {
    double current;
    double sum;
};

struct result serviceLn(double x, double curr, int i, int depth) {
    double calc, local;
    struct result res;

    res.current = curr;
    local = res.current;

    printf("local = %f res = %f sum = %f i = %i\n", local, res.current, res.sum, i - 1);

    if (i - 1 == depth) {
        res.sum = local;
        return res;
    }

    else {
        calc = -x * (i - 1) / i;
        res.current *= calc;
        res = serviceLn(x, res.current, i + 1, depth);
    }

    res.sum += local;
    printf("local = %f res = %f sum = %f i = %i\n", local, res.current, res.sum, i - 1);

    return res;
}

double ln(double x, int i) {
    return serviceLn(x, x, 2, i).sum;
}

int main() {
    printf ("result = %f\n", ln(0.5, 5));
    printf ("library result = %f", log(1.5));
    return 0;
}
