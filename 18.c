#include<stdio.h>
int main (){
    int a[]= {1,3,4,5,6,3}
    int i = 10;
    int*p = &i;
    int *d = &a[];
    printf ("value of element at 1 index of array is : %d", *(d+1 ));
    return 0;
}