#include <iostream>
using namespace std;
int main(){
	int tCase;
	cin>>tCase;
	while(tCase--){
		int n;
		cin>>n;
		int X[n],Y[n];
		for(int i = 0 ; i < n ; i++)
			cin>>X[i];
		for(int i = 0 ; i < n ; i++)
			cin>>Y[i];
		int time1(0),time2(0);
		for(int i = 0 ; i < n ; i++){
			if(i%2)
				time1 += X[i];
			else
				time1 += Y[i];
		}
		for(int i = 0 ; i < n ; i++){
			if(i%2)
				time2 += Y[i];
			else
				time2 += X[i];
		}
		cout<<min(time1 , time2)<<endl;
	}
}