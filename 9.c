#include<stdio.h>
int main(){
    int a[5][5];
    int sum1 = 0 , sum2=0;
    printf("Enter the elements of 5x5 array\n");
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Enter the %d,%d element of array\n",i,j);
            scanf("%d",&a[i][j]);
            
            
            }
    }
    printf("\nRow total");
    for (int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            sum1+=a[i][j];
            
        }
        printf("%d ",sum1);
        sum1=0;
    }
    printf("\nColoumn total");
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
            sum2+=a[i][j];
            
        }
        printf("%d ",sum2);
        sum2=0;
    }
    
    return 0;
    

}