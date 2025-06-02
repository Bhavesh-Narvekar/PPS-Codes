//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-ATM Interface
//Branch-VLSI

#include<stdio.h>
int main()
{
    int pass,i;
    for(i=1;i<=3;i++)
 {
     printf("\nEnter the Password");
     scanf("%d",&pass);
     if(pass==1234)
     {
        printf("Please Collect The Cash\n");
        break;
     }
     else if(i==3)
     {
        printf("You Have exceded the incorrect attempt  pleas tyr after 24 hours");
     }
     else
     {
        printf("Incorrect password");
     }
   
}
     
    return 0;

}