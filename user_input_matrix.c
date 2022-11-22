#include <stdio.h>
#include<conio.h>
int main(){
    // int a[3][3]={1, 2,3, 4, 5,6, 7, 8, 9};
    // int a[3][3]={{1, 2,3}, {4, 5,6}, {7, 8, 9}};
    int row , col;
    printf("Enter the value of row and column ");
    scanf("%d" , &row);

    scanf("%d" , &col);


   int a[row][col];
    
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("the %d %d value of array is ", i , j );
            scanf("%d", &a[i][j]);

        // printf("\n");
        }
        printf("\n");
    }


 printf("your input array is \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("the %d %d value of array is %d \n", i , j , a[i][j]);
        }
        printf("\n");
    }
    return 0;
}