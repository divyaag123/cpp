#include<stdio.h>
int *func(int a[], int n);
int main(){
    int a[] =  { 1,2 , 3, 4, 5,};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = func(a,n);
    printf("Mid value in array is : %d ", *mid);
    return 0;
}
int *func(int a[], int n)
   {
    return &a[n/2];

} 