//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Calculate total marks average and percentage
//Branch-VLSI

#include <stdio.h>

int main() {
    int physics, chemistry, maths, biology;
    int total, average, percentage;
    printf("Enter marks obtained in Physics");
    scanf("%d", &physics);
    printf("Enter marks obtained in Chemistry");
    scanf("%d", &chemistry);
    printf("Enter marks obtained in Maths");
    scanf("%d", &maths);
    printf("Enter marks obtained in Biology");
    scanf("%d", &biology);
    total = physics + chemistry + maths + biology;
    average = total / 4;
    percentage = (total/400.0)*100;
    printf("\nResults:\n");
    printf("Total Marks: %.2d\n", total);
    printf("Average Marks: %.2d\n", average);
    printf("Percentage: %.2d%%\n", percentage);
    return 0;
}