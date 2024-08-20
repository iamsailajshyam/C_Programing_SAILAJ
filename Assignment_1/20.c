//Write a C program to input any character and check whether it is an alphabet, digit, or special character. 
#include <stdio.h>

int main() {
    char ch;

    // Input the character
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // If not alphabet or digit, it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}

