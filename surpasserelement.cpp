#include<iostream>
void countSurpasser(int arr[],int n);
int main(){
    int arr[8]={1,2,9,5,6,12,4,0};
    int n=8;
    countSurpasser(arr,n);
    return 0;
}
void countSurpasser(int arr[],int n){
    int count=0;
    int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j])
                count++;
        }
        std::cout<<count<<"\t";
        count=0;
    }
}
