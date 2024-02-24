#include <stdio.h>
#include <complex.h>
#include <math.h>

int main() {
    // Given value
    double complex w4 = 16 * I;  // 16j in C is represented by I

    // Options
    double complex option_A = 2 * cexp(I * (2 * M_PI / 8));
    double complex option_B = 2 * cexp(I * (M_PI / 8));
    double complex option_C = 2 * cexp(I * (5 * M_PI / 8));
    double complex option_D = 2 * cexp(I * (9 * M_PI / 8));

    // Verifying options
    if (cabs(w4 - cpow(option_A, 4)) < 1e-10) {
        printf("(A) is a valid option.\n");
    } else {
        printf("(A) is not a valid option.\n");
    }

    if (cabs(w4 - cpow(option_B, 4)) < 1e-10) {
        printf("(B) is a valid option.\n");
    } else {
        printf("(B) is not a valid option.\n");
    }

    if (cabs(w4 - cpow(option_C, 4)) < 1e-10) {
        printf("(C) is a valid option.\n");
    } else {
        printf("(C) is not a valid option.\n");
    }

    if (cabs(w4 - cpow(option_D, 4)) < 1e-10) {
        printf("(D) is a valid option.\n");
    } else {
        printf("(D) is not a valid option.\n");
    }

    return 0;
}
