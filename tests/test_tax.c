#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../src/tax.h"

#define EPS 1e-2

void assert_close(double got, double want, const char *msg) {
    if (fabs(got - want) > EPS) {
        fprintf(stderr, "FALHA: %s — got %.2f want %.2f\n", msg, got, want);
        exit(1);
    } else {
        printf("OK: %s\n", msg);
    }
}

int main(void) {
    assert_close(compute_tax(2000.00), 0.00, "isento (2000.00)");

    assert_close(compute_tax(2500.00), 5.34, "7.5% (2500.00)");

    assert_close(compute_tax(3000.00), 55.84, "15.0% (3000.00)");

    assert_close(compute_tax(4000.00), 224.51, "22.5% (4000.00)");

    assert_close(compute_tax(5000.00), 466.27, "27.5% (5000.00)");

    printf("Todos os testes OK\n");
    return 0;
}
