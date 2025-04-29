//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Interchange the Numbers without third variable
//Branch-VLSI

#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);
    printf("Numbers before interchange: A = %d, B = %d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after interchange: A = %d, B = %d\n", a, b);
    
    return 0;
}