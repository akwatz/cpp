#include<iostream>
void merge(int left[],int right[],int nL,int nR,int arr[]){
    int i=0,j=0,k=0;
    while(i<nL&&j<nR){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            k++;
            i++;
        }
        else{
            arr[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<nL){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<nR){
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int n){
    if(n<2)
        return;
    else{
        int mid=n/2;
        int left[mid],right[n-mid];
        int i=0;
        for(i=0;i<mid;i++)
            left[i]=arr[i];
        for(i=0;i<n-mid;i++)
            right[i]=arr[mid+i];
        mergeSort(left,mid);
        mergeSort(right,n-mid);
        merge(left,right,mid,n-mid,arr);
    }
}

