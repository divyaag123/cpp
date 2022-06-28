#include<stdio.h>
int main()
{
    int a[2][2][3] = {   //intialising 3D array
                        {{1,2,3},{4,5,6}},
                        {{7,8,9},{10,11,12}}
    }; 
    //printing the elements of 3D array
    for(int i=0; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            for(int k=0; k<3 ; k++)
            {
                printf("%d", a[i][j][k]);
            }
        }
    } 
    
    
    return 0;

}