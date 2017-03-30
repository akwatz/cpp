#include<iostream>
#include<string>

int main(){
    using namespace std;
    int n;
    cin>>n;
    while(n--){
    string myString;
    cin>>myString;
    int lookup[123];
    for(int i=97;i<=122;i++)
        lookup[i]=-1;
    int count=0;
    int length=myString.length();
    for(int i=0;i<length;i++){
        int temp=myString[i];
        if(lookup[temp]==-1){
            count++;
            lookup[temp]++;
        }
    }
    cout<<count<<endl;}
    return 0;
}
