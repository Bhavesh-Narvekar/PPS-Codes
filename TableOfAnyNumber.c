#include<stdio.h>
int main()
{
    int i=1,num;
    printf("Enter The Number");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("%d\n", num*i);  
        i++;
    }
    return 0;
}