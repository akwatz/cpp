#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
	int tCase;
	cin>>tCase;
	while(tCase--){
		int n;
		cin>>n;
		int arr[n][n];
		//taking input
		for(int i = 0; i < n ; i++)
			for(int j = 0 ; j < n ; j++)
				cin>>arr[i][j];
		//minimizing bandwidth
		int count(0);
		for(int i = 0 ; i < n ; i++)
			for(int j = 0 ; j < n ; j++)
				if(arr[i][j] == 1){
					count += 1;
					arr[i][j] = 0;
				}

		for(int i = 0, j = 0 ; i < n && j < n && count > 0 ; i++ , j++ , count--)
			arr[i][j] = 1;
		int j = -1 , k = 1;
		while(count > 0){
			for(int i = 0 ; i < n && count > 0 ; i++)
				if(i + j >= 0 && count > 0){
					arr[i][i + j] = 1;
					count--;
				}
			
			j--;
			for(int i = 0 ; i < n && count > 0 ; i++)
				if(i + k < n && count > 0){
					arr[i][i + k] = 1;
					count--;
				}
			k++;
		}


		int bw(0);
		//checking for bandwidth
		for(int i = 0 ; i < n ; i++)
			for(int j = 0 ; j < n ; j++)
				if(arr[i][j] == 1)
					bw = max(bw , abs(i - j));
		
		cout<<bw<<endl;

		/*for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++)
				cout<<arr[i][j]<<"\t";
			cout<<endl;
		}*/
	}
	return 0;
}