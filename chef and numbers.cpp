#include<iostream>
int sumDigits(int x){
    int sum=0;
    int r(0);
    while(x){
        r=x%10;
        sum+=r;
        x/=10;
    }
    return sum;
}
int main(){
    int x;
    std::cin>>x;
    int count=0;
    if(x<10000000){
    for(int i=1;i<x;i++){
        int temp=sumDigits(i);
        if(i+temp+sumDigits(temp)==x){
            count++;
        }
    }}
    else{
        for(int i=x-1000;i<x;i++){
        int temp=sumDigits(i);
        if(i+temp+sumDigits(temp)==x){
            count++;
        }
      }
    }
    std::cout<<count<<std::endl;
    return 0;
}
