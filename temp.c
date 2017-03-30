#include <stdio.h>
void print(int row , int col,int arr[row][col]){
    int i = 0 , j = 0;
    for(i ; i < row ; i++){
        for(j = 0 ; j < col ; j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
}
int main(){
    int arr[3][2] = {1234, 12345,
                    4567,6789,
                    89020, 7676};
    print(3,2,arr);
    return 0;
}
