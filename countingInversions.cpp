#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
void merge(int left[],int mid,int right[],int arr[],int n,long long int &count){
	int i(0),j(0),k(0);
	while(i<mid && j<n-mid){
		if(left[i]<=right[j]){
			arr[k]=left[i];
			i++;
			k++;
		}
		else{
			count+=(mid-i);
			arr[k]=right[j];
			j++;
			k++;
		}
	}
	while(i<mid){
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<n-mid){
		arr[k]=right[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int n,long long int &count){
	if(n<2)		//base case for the recursion
		return;
	int mid=n/2;
	//partitioning the base array in two halves
	int left[mid];
	int right[n-mid];
	//storing the elements of the base array in two halves
	for(int i=0;i<mid;i++)
		left[i]=arr[i];
	for(int i=0;i<n-mid;i++)
		right[i]=arr[mid+i];
	//recursing the function in two halves
	mergeSort(left,mid,count);
	mergeSort(right,n-mid,count);
	//merging the two halves
	merge(left,mid,right,arr,n,count);
}

int main(){
	int arr[1000000];
	int n;
	ifstream File;
    File.open("int.txt");
    while(!File.eof()){
        File >> arr[n];
        n++;
    }

    File.close();
    long long int count(0);
    mergeSort(arr,n-1,count);
    cout<<count<<endl;
    return 0;
}

