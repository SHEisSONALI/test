#include<stdio.h>
void main()
{
    int f=0;
    float c;
    
    for (f=0; f<=100; f++)
    {
        c=5*(f-32)/9;
        printf("farenhiet=%d\t celcius=%2.2f\n",f,c);
        f=f+9;
    }
}