//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Sum Of Two Number By Taking Input From User
//Branch-VLSI

#include<stdio.h>
int main()
{
    int n1, n2, sum; 
    printf("Enter First Number");
    scanf("%d", &n1);
    printf("Enter Second Number");
    scanf("%d", &n2);
    sum = n1 + n2;  
    printf("The Sum Of %d and %d is %d", n1, n2, sum); 
    return 0;
}