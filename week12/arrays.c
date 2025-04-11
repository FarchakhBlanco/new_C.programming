#include<stdio.h>

#define ROW 4
#define COL 4
void print(int row, int col,const int arr[row][col]);
void setRow(int row, int col, int arr[row][col],int row_num,int val);
int total(int row, int col,const int arr[row][col]);
int PerimeterTotal(int row, int col,const int arr[row][col]);
void xPatternSum(int row, int col, const int arr[row][col]);
/*

return the sum of all edge element
*/


int main(int argc, char *argv[]){
    //set the second row with  99



    //Create and initialise a 2d array of int
    int arr[ROW][COL]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // acess element
    printf("%d\n", arr[0][1]+arr[1][2]);
    //lets change the value of element
    arr[1][1]=10;
    
    print(ROW,COL,arr);
    setRow(ROW, COL, arr, 1, 99);
    print(ROW,COL,arr);
    int totalSum = total(ROW, COL, arr);
    printf("\nTotal of all elements: %d\n", totalSum);

    // Calculate and display perimeter total
    int perimeterSum = PerimeterTotal(ROW, COL, arr);
    printf("Total of perimeter elements: %d\n", perimeterSum);
    xPatternSum(ROW,COL,arr);

    return 0;
}
void print(int row, int col,const int arr[row][col]){
    for (int i =0 ;i<row;i++){
        for(int j = 0 ; j<col; j++){
            printf("%4d",arr[i][j]);
        }
        puts("");
    }

}
void setRow(int row, int col, int arr[row][col],int row_num,int val){
    for(int j = 0; j <col;j++){
        arr[row_num][j]=val;
    }

}
int total(int row, int col,const int arr[row][col]){
    int sum=0;
    for (int i =0 ;i<row;i++){
        for(int j = 0 ; j<col; j++){
            sum+=arr[i][j];
        }



    }

    return sum;
}
int PerimeterTotal(int row, int col,const int arr[row][col]){
    int sum = 0;

    // Top row
    for (int j = 0; j < col; j++) {
        sum += arr[0][j];
    }

    // Bottom row
    for (int j = 0; j < col; j++) {
        sum += arr[row - 1][j];
    }

    // Left and right columns (excluding corners already counted)
    for (int i = 1; i < row - 1; i++) {
        sum += arr[i][0];           // Left column
        sum += arr[i][col - 1];     // Right column
    }

    return sum;
}
void xPatternSum(int row, int col, const int arr[row][col]) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        sum += arr[i][i];               // Main diagonal
        sum += arr[i][col - 1 - i];     // Anti-diagonal
    }

    // If it's an odd-sized matrix, subtract the center element once to avoid double counting
    if (row == col && row % 2 == 1) {
        sum -= arr[row / 2][col / 2];
    }

    printf("Sum of X pattern elements = %d\n", sum);
}


