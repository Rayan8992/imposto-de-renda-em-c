#include <stdio.h>
#include <stdlib.h>
#include "tax.h"

int main(int argc, char *argv[]) {
    double income = 0.0;
    if (argc >= 2) {
        income = atof(argv[1]);
    } else {
        if (scanf("%lf", &income) != 1) {
            fprintf(stderr, "Uso: %s <renda>\n", argv[0]);
            return 1;
        }
    }

    double tax = compute_tax(income);
    if (tax < 0) tax = 0.0;
    printf("%.2f\n", tax);
    return 0;
}
