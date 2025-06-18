#include<stdio.h>
int main()
{
    int n1,n2,op,result;
    printf("Enter The First Number");
    scanf("%d",&n1);
    printf("Enter The Second Number");
    scanf("%d",&n2);
    printf("Enter The Operation \n For Addition press 1 \n For Subtraction press 2 \n For Multiplication press 3 \n For Division press 4 \n");
    scanf("%d",&op);
    if (op==1)
    {
        result=n1+n2;
        printf("Addition Of Numbers is %d",result);
    }
    else if(op==2)
    {
        result=n1-n2;
        printf("Subtraction Of Numbers is %d",result);
    }
        else if(op==3)
    {
        result=n1*n2;
        printf("Multliplication Of Numbers is %d",result);
    }
        else if(op==4)
    {
        result=n1/n2;
        printf("Division Numbers is %d",result);
    }
        else if(op)
    {
        printf("Invalid Input");
    }
    return 0;
    
}