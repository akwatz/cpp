#include<iostream>
#include<vector>
int b_count(int n){
    int count=0,maxCount=0;
    do{
        if(n%2==1)
            count++;
        else{
            if(count>maxCount)
                maxCount=count;
            count=0;
        }
    }while(n/=2);
    if(n%2==1)
        count++;
    if(count>maxCount)
        maxCount=count;
    return maxCount;
}
int main(){
    int n;
    std::cin>>n;
    int maxCount=b_count(n);
    std::cout<<maxCount<<std::endl;
    return 0;
}
