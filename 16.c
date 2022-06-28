// program to find the min and max value in an array
#include<stdio.h>
void minmax(int arr[], int len, int*min , int*max);
int main(){
    int a[]= {24,46,35,56,78,79,98,80,76,45};
    int max , min ;
    int len= sizeof (a) /sizeof (a[0]);
    minmax(a,len,&min , &max);
    printf(" Minimum value in the array is : %d and maximu value is: %d", min , max);
    return 0;

}
void minmax(int arr[],int len, int*min , int*max){
    *min = *max = arr[0];
    int i;
    for(int i= 1; i<len; i++)
    {
        if(arr[i] > *max)
        {
            *max=arr[i];

        }
        if(arr[i]<*min)
        {
            *min = arr[i];
        }
    }

}