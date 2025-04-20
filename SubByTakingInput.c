//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Subtraction Of Two Number By Taking Input From User
//Branch-VLSI

#include<stdio.h>
int main()
{
    int n1, n2, sub;
    printf("Enter First Number");
    scanf("%d", &n1);
    printf("Enter Second Number");
    scanf("%d", &n2);
    sub = n1 - n2;
    printf("The subtraction of %d and %d is %d", n1, n2, sub);
    return 0;

}