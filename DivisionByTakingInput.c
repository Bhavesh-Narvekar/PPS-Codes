//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Division Of Two Number By Taking Input From User
//Branch-VLSI

#include<stdio.h>
int main()
{
    int n1, n2, div;
    printf("Enter First Number");
    scanf("%d", &n1);
    printf("Enter Second Number");
    scanf("%d", &n2);
    div=n1/n2;
    printf("The Division Of %d and %d is %d",n1, n2, div);
    return 0;
}