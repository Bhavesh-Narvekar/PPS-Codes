//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Pyramid Using Stars
//Branch-VLSI

#include <stdio.h>

int main() 
{
    int rows = 3,i,j,k;

    for ( i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= rows - i; j++) 
        {
            printf(" ");
        }
        
        for (k = 1; k <= 2 * i - 1; k++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}