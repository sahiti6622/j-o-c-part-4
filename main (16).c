/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int d,wsi=0,wsf=0,a;
    float asi,asf;
    int i[6]={560,660,590,760,480,960};
    float f[6]={66.0,79.25,76.55,98.45,98.45,96.40};
    printf("Enter the no of working days\n");
    scanf("%d",&d);
    for(a=0;a<6;a++)
    {
        wsi=wsi+i[a];
    }
    printf("Weekly salary of Mr. int is=%d\n",wsi);
    for(a=0;a<6;a++)
    {
        wsf=wsf+f[a];
    }
    printf("Weekly salary of Mr. float is=%d\n",wsf);
    asi=(wsi/d);
    printf("average salary of mr.int is=%f\n",asi);
    asf=(wsf/d);
    printf("average salary of mr.float is=%f\n",asf);
    

    
    

    return 0;
}

