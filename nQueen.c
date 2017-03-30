#include <stdio.h>
//function to check the feasibility
int isSafe(int n,int arr[][n],int row,int col){
	int i,j;
	for(i=0;i<col;i++)
		if(arr[row][i])
			return 0;

	for(i=row,j=col;i>=0 && j>=0;i--,j--)
		if(arr[i][j])
			return 0;

	for(i=row,j=col;i<n && j>=0;i++,j--)
		if(arr[i][j])
			return 0;

		return 1;
}
//fucntion to place queens
int nQueen(int n,int arr[][n],int col){
	if(col>=n)
		return 1;
	int row=0;
	for(row;row<n;row++){
		if(isSafe(n,arr,row,col)){
			arr[row][col]=1;
			if(nQueen(n,arr,col+1))
				return 1;
			arr[row][col]=0;
		}
	}
	return 0;
}
int main(){
	int n;
	printf("Enter the number of Queens\n");
	scanf("%d",&n);
	int arr[n][n];
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			arr[i][j]=0;
	nQueen(n,arr,0);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
}