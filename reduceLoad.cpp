#include <iostream>
using namespace std;
void allo(int fsz,int msz,int &count){
	if(fsz<=msz){
		count+=1;
		return;
	}
	int left=fsz/2;
	int right=fsz-left;
	allo(left,msz,count);
	allo(right,msz,count);
}
int main(){
	int fsz,msz;
	cin>>fsz>>msz;
	int count(0);
	allo(fsz,msz,count);
	cout<<count<<endl;
	return 0;
}