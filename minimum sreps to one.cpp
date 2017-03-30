#include<bits/stdc++.h>
int minStep(int n){
    int arr[n+1];
    arr[1]=0;
    arr[2]=1;
    arr[3]=1;
    for(int i=4;i<=n;i++)
        arr[i]=-1;
    int step=0;
    while(n!=1){
        if(arr[n]!=-1){
            step=step+arr[n];
            n=1;}
        else if(n%3==0){
            n/=3;
            step++;
        }
       else if(n%2==0){
            n/=2;
            step++;
        }
        else{
            n-=1;
            step++;
        }
    }
    return step;
}
int main(){
    for(int i=1;i<=20;i++)
        std::cout<<i<<" "<<minStep(i)<<std::endl;
    return 0;
}

