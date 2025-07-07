//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-1D Array
//Branch-VLSI

#include <stdio.h>
int main() 
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements are:\n");
    for(i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}