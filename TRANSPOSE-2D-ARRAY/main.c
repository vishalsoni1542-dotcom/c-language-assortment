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

    for(int k=0; k<col; k++){
        for(int p=0; p<row; p++){
            printf("%d",arr[p][k]);
        }
        printf("\n");
    }

    return 0;
}