#include<iostream>
int main(){
    int arr1[100000]={},arr2[10001]={};
    int n,q;
    using namespace std;
    cin>>n>>q;
    int arr[n];
    int i=0;
    for(i=0;i<n;i++)
        cin>>arr[i];
    while(q--){
        int a[3];
        for(i=0;i<3;i++)
            cin>>a[i];
        if(a[0]==1){
        if(arr[a[1]-1]<100000)
                    arr1[arr[a[1]-1]]--;
                else
                    arr2[arr[a[1]-1]%100000]--;
            arr[a[1]-1]=a[2];
        }
        else{
            for(i=a[1]-1;i<a[2];i++){
                if(arr[i]<100000)
                    arr1[arr[i]]++;
                else
                    arr2[arr[i]%100000]++;
            }
            int max=0;
            for(i=a[1]-1;i<a[2];i++){
                if(arr[i]<100000){
                    if(arr1[arr[i]]>max)
                        max=arr1[arr[i]];
                }
                else{
                    if(arr2[arr[i]%100000]>max)
                        max=arr2[arr[i]%100000];
                }
            }
            if(max-1>(a[2]-a[1])/2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
   return 0;
}
