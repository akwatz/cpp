#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lookup[n];
    int arr[n];
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
        lookup[i]=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int count(1);
    for(i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            count++;
        else{
            lookup[j]=count;
            j++;
            count=1;
        }
    }
    int max=count;
    for(i=0;i<n;i++){
        if(lookup[i]>max)
            max=lookup[i];
    }
    cout<<max<<endl;
    return 0;
}
