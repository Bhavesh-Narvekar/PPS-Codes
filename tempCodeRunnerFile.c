//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Calculater Using Function
//Branch-VLSI

#include<stdio.h>
int main()
{
    int n1,n2,action;
    printf("Enter The First Number \t");
    scanf("%d",&n1);
    printf("Enter The second Number");
    scanf("%d",&n2);

    printf("Enter The Operation \n For Addition press 1 \n For Subtraction press 2 \n For Multiplication press 3 \n For Division press 4");
    scanf("%d",&action);

    if(action==1)
    {
        printf("The Addition is : %d",add(n1,n2));
    }
    
    else if(action==2)
    {
        printf("The Subtraction is : %d",sub(n1,n2));
    }
    else if(action==3)
    {
        printf("The Multiplication is : %d",mult(n1,n2));
    }
    
    else if(action==4)
    {
        printf("The Division is : %d",div(n1,n2));
    }
    else if(action)
    {
        printf("invalid input");
    }
}
int add(n1,n2)
{
    int c;
    c=n1+n2;
    return c;
}
int sub(n1,n2)
{
    int c;
    c=n1-n2;
    return c;
}
int mult(n1,n2)
{
    int c;
    c=n1*n2;
    return c;
}
int div(n1,n2)
{
    int c;
    c=n1/n2;
    return c;
}