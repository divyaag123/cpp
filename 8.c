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
    for (int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            sum1+=a[i][j];
            
        }
        printf("%d Row total = %d\n",i,sum1);
        sum1=0;
    }
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
            sum2+=a[i][j];
            
        }
        printf("%d coloumn total = %d\n",j,sum2);
        sum2=0;
    }
    
    return 0;
    

}