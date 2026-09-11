#include <stdio.h>

int main(){

    int row;
    int col;

    printf("enter the row: ");
    scanf("%d",&row);

    printf("enter the col: ");
    scanf("%d",&col);

    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int u;

    printf("enter row number: ");
    scanf("%d",&u);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d",arr[i][j]);
        }
    }
    
    return 0;
}