#include<stdio.h>
int main(){
    int i= 8;
    int *p , *q;
    p= &i;
    q=p;
    printf("%d %d", *p,*q);
    return 0;
}