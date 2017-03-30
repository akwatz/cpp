#include<stdio.h>
int swaps(int a[],int l)
{
    int i,j,count=0;
    for(i=0;i<l;i++){
       for(j=0;j<l-i;j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=a[j];
            count++;
        }
       }
    }
        return count;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int i=0;
        int arr[n];
        for(i;i<n;i++)
            scanf("%d",&arr[i]);
        int count=swaps(arr,n);
        printf("Optimal train swapping takes place %d swaps\n",count);
    }
    return 0;
}
