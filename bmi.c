#include <stdio.h>

int main() {
    float weight, height, bmi;
    int n;

    printf("Enter your weight in kilograms: ");
    n = scanf("%f", &weight);

    if (n != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    printf("Enter your height in meters: ");
    n = scanf("%f", &height);

    if (n != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    bmi = weight / (height * height);

    printf("Your BMI is %.2f\n", bmi);

    return 0;
}
