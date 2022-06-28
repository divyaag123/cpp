#include <stdio.h>
int a,b;
int sum=0; //intialising sum
int main(){

    printf("enter 2 numbers a and b\n");
    scanf("%d %d",&a , &b);
    sum += a+b; // same as sum = sum +a +b
    printf(" sum = %d" , sum);
    return 0;


}


