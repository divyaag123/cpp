//Program to print fibonacci series
#include<stdio.h>
int main()
{
    int i , f1 = 0 , f2 = 1, f3;
    printf("\n%d\t %d\t",f1,f2);
    for(i=0; i<=10; i++)
    {
        f3 = f1 + f2;
        printf("%d\t" ,f3);
        f1 = f2;
        f2 = f3;
    
    }
    return 0;
}