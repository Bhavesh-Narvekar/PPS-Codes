//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Find Area and Perimeter Of Rectangle
//Branch-VLSI
#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the Length Of The Rectangle");
    scanf("%d",&length);
    printf("Enter the Breadth Of The Rectangle");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("The Area Of Rectangle is %d /n he Perimeter Of Rectangle is %d",area,perimeter);
    return 0;

    
}
