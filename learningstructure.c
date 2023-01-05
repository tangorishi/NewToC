#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main(void) {
    struct Complex c1, c2, c3;

    c1.real = 1;
    c1.imaginary = 2;
    c2.real = 3;
    c2.imaginary = 4;

    c3 = addComplex(c1, c2);

    printf("(%.1f + %.1fi) + (%.1f + %.1fi) = (%.1f + %.1fi)\n", c1.real, c1.imaginary, c2.real, c2.imaginary, c3.real, c3.imaginary);

    return 0;
}
