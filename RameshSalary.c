//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Ramesh Salary
//Branch-VLSI
#include <stdio.h>

int main() {
    float basic, da, hra, gross;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic);

    da = 0.4 * basic;
    hra = 0.2 * basic;
    gross = basic + da + hra;
    printf("House Rent Allowance:%f \n", hra);
    printf("Dearness Allowance:%f \n", da);
    printf("Gross Salary: %.2f \n", gross);

    return 0;
}