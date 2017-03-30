#include<stdio.h>
void insertion_sort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while((temp<arr[j])&&(j>=0)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n][2];
    int i;
    for(i=0;i<n;i++)
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    int imp[n],unimp[n];
    int l=0,m=0,t=0;
    for(i=0;i<n;i++){
        if(arr[i][1]==1){
            imp[l]=arr[i][0];
            l++;
            t++;
        }
        else{
            unimp[m]=arr[i][0];
            m++;
        }
    }
    insertion_sort(imp,l);
    int sum=0;
    for(i=0;i<t-k;i++)
        imp[i]=-imp[i];
    for(i=0;i<l;i++)
        sum=sum+imp[i];
    for(i=0;i<m;i++)
        sum=sum+unimp[i];
    printf("%d\n",sum);
    return 0;
}
