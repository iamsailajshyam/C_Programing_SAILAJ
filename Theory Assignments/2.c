#include <stdio.h>

// Function to add two numbers using pointers
void add(int *a, int *b, int *result) {
    *result = *a + *b; 
}

int main() {
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
  
    add(&num1, &num2, &sum);
    printf("Sum: %d\n", sum);

    return 0;
}
