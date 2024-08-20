//Write a C program to evaluate the algebraic expression (ax+b)/(ax-b)
#include <stdio.h>

int main() {
    float a, x, b, result;

    printf("Enter the values of a, x, and b: ");
    scanf("%f %f %f", &a, &x, &b);

    if (a * x - b != 0) {
        result = (a * x + b) / (a * x - b);
        printf("Result: %.2f\n", result);
    } else {
        printf("Denominator is zero, division not possible.\n");
    }

    return 0;
}
