//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Factorial By Recursion
//Branch-VLSI

#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter The Number");
    scanf("%d",&num);
    result=fact(num);
    printf("%d",result);
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        n=n*fact(n-1);
        return n;
    }
}
