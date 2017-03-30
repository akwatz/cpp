#include<iostream>
#include<vector>
using namespace std;
void merge(int left[],int mid,int right[],int arr[],int n,int &count){
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
void mergeSort(int arr[],int n,int &count){
	if(n<2)
		return;
	int mid=n/2;
	int left[mid];
	int right[n-mid];
	for(int i=0;i<mid;i++)
		left[i]=arr[i];
	for(int i=0;i<n-mid;i++)
		right[i]=arr[mid+i];
	mergeSort(left,mid,count);
	mergeSort(right,n-mid,count);
	merge(left,mid,right,arr,n,count);
}
int main(){
	std::ifstream file("int.txt");

std::vector<std::vector<int>> vv;
std::string line;
while(std::getline(file, line))
{
    std::stringstream ss(line);
    int i;
    std::vector<int> v;
    while( ss >> i ) 
       v.push_back(i);
    vv.push_back(v);
}
	//int count(0);
	//mergeSort(arr,5,count);
	//cout<<count<<endl;
	return 0;
}

