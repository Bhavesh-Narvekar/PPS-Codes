//Bhavesh Nilesh Narvekar
//PRN-24030331378016
//Code-Calculate the Grades 
//Branch-VLSI

#include <stdio.h>

int main() 
{
    int marks;
    printf("Enter student's marks: ");
    scanf("%d", &marks);
    if(marks < 0 || marks > 100) 
    {
        printf("Invalid marks! Marks should be between 0 and 100.\n");
    } 
    else
    {
        printf("Grade: ");
        if(marks > 80) 
        {
            printf("A\n");
        }
        else if(marks > 70) 
        {
            printf("B\n");
        }
        else if(marks > 60) 
        {
            printf("C\n");
        }
        else if(marks > 50) 
        {
            printf("D\n");
        }
        else if(marks > 40) 
        {
            printf("E\n");
        }
        else 
        {
            printf("Fail\n");
        }
    }
    
    return 0;
}