#include <stdio.h>

int main(){

    int row;
    int col;

    printf("enter the row: ");
    scanf("%d",&row);

    printf("enter the col: ");
    scanf("%d",&col);

    int arr[row][col];

    printf("Enter array elements:\n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int rownum;

    printf("enter row number: ");
    scanf("%d",&rownum);

    int rowsum = 0;

        printf("Elements of row %d: ", rownum);

        for (int j = 0; j < col; j++) {
            printf("%d ", arr[rownum][j]);
            rowsum += arr[rownum][j];
        }
        printf("\nThe sum of row %d = %d\n", rownum, rowsum);

    int colnum;

    printf("enter row number: ");
    scanf("%d",&colnum);

    int colsum = 0;

        printf("Elements of col %d: ", rownum);

        for (int j = 0; j < row; j++) {
            printf("%d ", arr[j][colnum]);
            colsum += arr[j][colnum];
        }
        printf("\nThe sum of col %d = %d\n", colnum, colsum);
    
    return 0;
}