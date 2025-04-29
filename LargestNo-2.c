//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Largest Number from 2 given values
//Branch-VLSI

#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if(a > b) 
    {
        printf("%d is larger\n", a);
    } 
     if(b > a) 
    {
        printf("%d is larger\n", b);
    } 
    else 
    {
        printf("Both are equal\n");
    }
    
    return 0;
}