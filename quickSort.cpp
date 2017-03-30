#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;
/*int median(int temp[]){
	sort(temp,temp+3);
	return temp[1];
}*/
int partition(int arr[],int start,int end,long long int &count){
	if(start>=end)
		return start;
	count+=(end-start);
	int pIndex(start+1);
	//int mid=(start+end)/2;
	//int temp[]={arr[start],arr[end],arr[mid]};
	//int med=median(temp);
	/*if(arr[end]==med)
		swap(arr[start],arr[end]);
	if(arr[mid]==med)
		swap(arr[start],arr[mid]);*/
	int pivot=arr[start];
	for(int i=start+1;i<=end;i++){
		//count++;
		if(arr[i]<pivot){
			swap(arr[i],arr[pIndex]);
			pIndex++;
		}
	}
	swap(arr[start],arr[pIndex-1]);
	return pIndex-1;
}
void quickSort(int arr[],int start,int end,long long int &count){
	if(start>=end)
		return;
	int pIndex=partition(arr,start,end,count);
	quickSort(arr,start,pIndex-1,count);
	quickSort(arr,pIndex+1,end,count);
}
int main(){
	//int arr[1000000];
	//int n;
	//ifstream File;
    //File.open("quicksort1.txt");
    /*while(!File.eof()){
        File >> arr[n];
        n++;
    }

    File.close();*/
    int arr[]={4,3,6,5,0,1,2,9};
    int n = 8;
    long long int count(0);
	quickSort(arr,0,n-1,count);
	for(int i=0;i<=n-1;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	cout<<count<<endl;
	return 0;
}
