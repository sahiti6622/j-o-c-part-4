/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int arr[10],key,i,attempt=0,count=0,count2=0;
    
    printf("Enter the numbers on chit: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the number to be searched by Mr.Int : ");
    scanf("%d",&key);
    
    for(int i=0;i<10;i++)
    {
        if(key==arr[i])
        {
            count++;
        }
    }
    
    for(int i=0;i<10;i++)
    {
        if(key==arr[i])
        {
            count2++;
            if(count==count2)
            {
                goto end;
            }
        }
        attempt++;
    }
    end:printf(" Number of attempts made is %d",attempt+1);
    
}
