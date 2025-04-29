//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Print All Even No from 0 to 10
//Branch-VLSI

#include <stdio.h>

int main() 
{
    printf("Even numbers between 0 and 10:\n");
    
    for(int i = 0; i <= 10; i++) 
    {
        if(i % 2 == 0) 
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}