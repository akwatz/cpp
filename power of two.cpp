#include<bits/stdc++.h>
using namespace std;
int powerTwo(int n){
    int flag(0);
    while(n!=1){
        if(n%2!=0){
                flag=1;
                break;
            }
        n/=2;
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i(0);
    for(i=0;i<n;i++)
        cin>>arr[i];
    `int count=0;
    int j(0);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int flag=powerTwo(arr[i]+arr[j]);
            //cout<<flag<<endl;
            if(flag==0)
                count++;
        }
    }
    cout<<count<<endl;
}
