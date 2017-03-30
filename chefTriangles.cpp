#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long n,l,r;
	cin>>n>>l>>r;
	long long arr[n];
	for(int i = 0; i<n; i++)
		cin>>arr[i];
	sort(arr,arr+n);
	long long lower = arr[1] - arr[0];
	long long sum = arr[n-1] + arr[n-1];
	long long upper(0);
	if(sum > r)
		upper = r;
	else
		upper = sum - 1;
	if(l > lower)
		lower = l;
	else
		lower += 1;
	if(upper - lower > 0)
		cout << upper - lower + 1 << endl;
	else 
		cout<<"0"<<endl;
	return 0;
}