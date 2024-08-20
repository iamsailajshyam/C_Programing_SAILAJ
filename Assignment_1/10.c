//Convert Temperatures Between Celsius and Fahrenheit
#include <stdio.h>

int main() {
    float temp, convertedTemp;
    char unit;

    printf("Enter temperature (e.g., 30C or 86F): ");
    scanf("%f%c", &temp, &unit);

    if (unit == 'C' || unit == 'c') {
        convertedTemp = (temp * 9 / 5) + 32;
        printf("%.2fC = %.2fF\n", temp, convertedTemp);
    } else if (unit == 'F' || unit == 'f') {
        convertedTemp = (temp - 32) * 5 / 9;
        printf("%.2fF = %.2fC\n", temp, convertedTemp);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
