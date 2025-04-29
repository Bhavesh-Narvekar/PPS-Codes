//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-calculate Number of notes and coins
//Branch-VLSI

#include <stdio.h>

int main() 
{
    int amount,hundred, ten, one;
    printf("Enter a 3-digit amount: ");
    scanf("%d", &amount);
    hundred = amount / 100;
    ten = (amount % 100) / 10;
    one = amount % 10;
    printf("\nDenominations required:\n");
    printf("100-rupee notes: %d\n", hundred);
    printf("10-rupee notes: %d\n", ten);
    printf("1-rupee coins: %d\n", one);
    
    return 0;
}