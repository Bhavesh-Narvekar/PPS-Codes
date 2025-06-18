//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Fibunacchi
//Branch-VLSI


#include<stdio.h>
int main() {

  int i,cn=0,nn,pn=1;

  for ( i = 1; i <=15; i++)
  {
  
    nn=cn+pn;
    pn=cn;
    cn=nn;
  
    printf("%d\n",nn);

    
  }
  

  return 0;
}