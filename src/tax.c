#include "tax.h"

double compute_tax(double income) {
    if (income <= 2428.80) {
        return 0.0;
    } else if (income <= 2826.65) {
        return income * 0.075 - 182.16;
    } else if (income <= 3751.05) {
        return income * 0.15 - 394.16;
    } else if (income <= 4664.68) {
        return income * 0.225 - 675.49;
    } else {
        return income * 0.275 - 908.73;
    }
}
