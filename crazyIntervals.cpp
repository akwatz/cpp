#include <iostream>
using namespace std;
void beaut(int a,int b,int &count){
	if(a>b)
		return;
	if(a==b){
		if(a%2==1)
			return;
		count+=1;
		return;
	}
	if((a*b)%2==0){
		count+=1;
		return;
	}
	int mid=(a+b)/2;
	beaut(a,mid,count);
	beaut(mid+1,b,count);
	return;
}
int main(){
	int tcase;
	cin>>tcase;
	while(tcase--){
		int a,b;
		cin>>a>>b;
		int count(0);
		beaut(a,b,count);
		cout<<count<<endl;
	}
	return 0;
}