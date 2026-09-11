#include <stdio.h>

int main(){

    int row;
    int col;

    printf("enter the row: ");
    scanf("%d",&row);

    printf("enter the col: ");
    scanf("%d",&col);

    int arr[row][col];
    printf("enter array's element: \n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int large = arr[0][0];
    printf("the largest element is: ");

    for(int k=0; k<row; k++){
        for(int p=0; p<col; p++){
            if(large<arr[k][p]){
                printf("%d",arr[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}