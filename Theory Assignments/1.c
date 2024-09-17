//Write a C program to create, initialize and use pointers.
#include <stdio.h>

int main() {
  //Declare and initialize an integer variable
    int num = 10;
    int *ptr = &num;
  
    printf("Value of num: %d\n", *ptr);
    *ptr = 20; 
    printf("New value of num: %d\n", *ptr);
    printf("Address of num: %p\n", (void *)ptr);
    printf("Address of num (directly): %p\n", (void *)&num);
    ptr++;
    printf("Address after incrementing pointer: %p\n", (void *)ptr);
    
    return 0;
}
