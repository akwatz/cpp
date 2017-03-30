#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int tCase;
	cin>>tCase;
	while(tCase--){
		int N;
		cin>>N;
		int arr[N];
		for(int i = 0 ; i < N ; i++)
			cin>>arr[i];
		sort(arr , arr + N);
		for(int i = 0 ; i < N-1 ; i++){
			if(arr[i + 1] - arr[i] == 1)
				continue;
			int flagL(0) , flagR(0);
			if(i < N-2){
				if(arr[i + 2] - arr[i + 1] != 1){
					cout<<arr[i + 1]<<endl;
					break;
				}
				flagR += 1;
			}
			if(i > 0){
				if(arr[i] - arr[i - 1] != 1){
					cout<<arr[i]<<endl;
					break;
				}
				flagL += 1;
			}
			if(flagL){
				cout<<arr[i + 1]<<endl;
				break;
			}
			if(flagR){
				cout<<arr[i]<<endl;
				break;
			}
		}
	}
}