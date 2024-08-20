//Write a C program to find the sum and average of three number
#include <stdio.h>

int main() {
    float num1, num2, num3, sum, average;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate sum
    sum = num1 + num2 + num3;

    // Calculate average
    average = sum / 3;

    // Output the results
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
