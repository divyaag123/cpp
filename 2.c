#include <stdio.h>
#define N 10
int main(){
    int arr[N] , i;
    for (i=0;i<N;i++){
        printf("Enter the input for index %d ",i); //aska the user to enter the elements for array
        scanf("%d", &arr[i]); // inputs are stored in a array 

    }
    printf("\n Array elements are as follows:\n");
    for(i=0;i<N;i++){
        printf("%d",arr[i]);// Display array elements

    }
    return 0;
}