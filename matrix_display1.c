#include <stdio.h>
#include<conio.h>
int main(){
    // int a[3][3]={1, 2,3, 4, 5,6, 7, 8, 9};
    int a[3][3]={{1, 2,3}, {4, 5,6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("the %d %d value of array is %d \n", i , j , a[i][j]);
        }
        printf("\n");
    }
    return 0;
}