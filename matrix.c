#include<stdio.h>
int main(){
    int matrix[4][4];
    int i,j;
    printf("Enter the inputs for 4x4 matrix\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix you've entered is:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
