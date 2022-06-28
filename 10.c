//WAP to multiply two matrices a and b 
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX];
    int b[MAX][MAX];
    int product[MAX][MAX];
    int arows,acolumns;
    int brows,bcolumns;
    int sum=0;
    printf("Enter the no. of rows and coloumns of matrix a :");
    scanf("%d %d",&arows,&acolumns);
    
    printf("Enter the elements of matrix a:\n");
    //taking the inputs for elements of  matrix a from user 
    for(int i=0;i<arows;i++)
    {
        for(int j=0;j<acolumns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of brows and bcolumns");
    scanf("%d  %d",&brows,&bcolumns);
    if(brows != acolumns)
    {
        printf("Sorry! Wecannot multiply the matrices a and b  ");

    }
    else
    {
        printf("Enter the elements of matrix b:\n");//TAKING THE INPUTS OF MATRIX B FROM THE USER
    }
    for(int i=0; i<brows;i++)
    {
        for(int j=0; j<bcolumns;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //resultant matrix
    
   
    for (int i=0;i<arows;i++)
    {
        for(int j=0;j<acolumns;j++)
        {
            for(int k=0;k<brows;k++)
            {
                sum+= a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum=0;
             
        }

    }
    //printing product matrix
    printf("Resultant matrix\n");
    for (int i=0;i<arows;i++)
    {
        for(int j=0;j<bcolumns;j++)
        {
            printf("%d",product[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}