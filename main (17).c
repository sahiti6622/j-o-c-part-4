/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;float largest;
    int i[6]={560,660,590,760,480,960};
    float f[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    
     largest=i[0];
    for(a=1;a<6;a++)
    {
        
        if(largest<i[a])
        {
            largest=i[a];
        }
        
            
    } 
    printf("mr.int can party when he get a salary of %f\n",largest );
    for(a=1;a<6;a++)
    {
        largest=f[0];
        if(largest<f[a])
        {
            largest=f[a];
        }
    
            
        }
    printf("mr.float can party when he get a salary of %f\n",largest );

    return 0;
}

