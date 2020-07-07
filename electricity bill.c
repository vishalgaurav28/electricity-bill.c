/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//electricity bill preparation//
#include <stdio.h>

void main()
{
    int c,charge;
    
    printf("enter the units\n");
    scanf("%d",&c);
    if(c<=50)
    
    charge=c*2;
    else
    if(c>50&& c<=100)
    charge=50*2+(c-50)*4;
    else
    charge=50*2+50*4+(c-100)*6;
    printf("charge=%d",charge);
    
    
}
