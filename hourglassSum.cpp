#include<iostream>
using namespace std;


int main(){
    int a[6][6];
    int i=0,j=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++)
            std::cin>>a[i][j];
    }
    int sum=0,maxSum=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2];
            sum=sum+a[i+1][j+1];
             sum=sum+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
        }
        std::cout<<sum;
        if(sum>maxSum)
            maxSum=sum;
        sum=0;
        std::cout<<"\t"<<maxSum<<std::endl;
    }
    std::cout<<maxSum<<std::endl;
    return 0;
}
