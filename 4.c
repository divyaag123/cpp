#include<stdio.h>
int main(){
    int arr [5]= {6,7,8,2,7};
    for(int i =0;i<5;i++){
        if(arr[i]=arr[i+1])
        {
            printf("yes");
        }
        ++i;
        return 0;
        
        
    }
}