//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Find If number is even or odd
//Branch-VLSI

#include <stdio.h>

int main() 
{
    int number;

    printf("Enter an number: ");
    scanf("%d", &number);
    if(number & 1) 
    {
        printf("%d is odd.\n", number);
    }
    else
    {
        printf("%d is even.\n", number);
    }

    return 0;
}