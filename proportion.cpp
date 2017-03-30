#include<iostream>
int main(){
    int arr[4];
    int i=0;
    for(int i=0;i<4;i++)
        std::cin>>arr[i];
    if(arr[0]*arr[1]==arr[2]*arr[3]){
        std::cout<<"Possible"<<std::endl;
        return 0;
    }
    else if(arr[0]*arr[2]==arr[3]*arr[1]){
        std::cout<<"Possible"<<std::endl;
        return 0;
    }
    else if(arr[0]*arr[3]==arr[1]*arr[2]){
        std::cout<<"Possible"<<std::endl;
        return 0;
    }
    else
        std::cout<<"Impossible"<<std::endl;
    return 0;
}
