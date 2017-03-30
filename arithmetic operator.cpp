#include<iostream>
int getInput(){
    int x;//to temporarily store the input
    std::cout<<"Enter an integer"<<std::endl;
    std::cin>>x;//getting input from the user
    return x;//returning the collected input to main
}
bool even(int num){
    bool b;//to temporarily store the value if the number is even
    b=num%2==0;//checking whether the number is even
    return b;
}
int main(){
    int num;//allocating variable
    num=getInput();//calling to get input
    bool b;
    b=even(num);
    if(b)
        std::cout<<"The number is even"<<std::endl;
    else
        std::cout<<"The number is odd"<<std::endl;
    return 0;
}
