//simple C program (Hello world)
/*
Name; Sanchez Ochieng
Reg no;CT101/G/26450/25
Date;25.9.2025
Description;Hello world c
*/


// main function
#include <stdio.h>

int main() {
    int age;
    double income;

    // Prompt user for age and income
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%lf", &income);

    // Check qualification status 
    if (age >= 21 & income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, you do not qualify for a loan.\n");
    }

    return 0;
    
}
