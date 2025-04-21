//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Average Of Three Numbers
//Branch-VLSI

#include<stdio.h>
int main()
{
    int n1, n2, n3, avg;
    printf("Enter First Number");
    scanf("%d", &n1);
    printf("Enter Second Number");
    scanf("%d", &n2);
    printf("Enter Third Number");
    scanf("%d", &n3);
    avg=(n1+n2+n3)/3;
    printf("The Average Of %d and %d is %d",n1, n2, avg);
    return 0;
}