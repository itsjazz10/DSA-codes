#include<stdio.h>
#include<conio.h>
 
int main()
{
    int i,j, arr[2][2];
    printf("enter elements of array");
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
        scanf("%d",&arr[i][j]);
       }
    }
    printf("array is : \n");

    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
        printf(" %d ",arr[i][j]);
       }
       printf("\n");
    }
    
    return 0;
}