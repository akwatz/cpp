#include<iostream>
#include<string>
int main(){
    std::string input;
    std::cin>>input;
    int len=input.length();
    int i;
    for(i=0;i<len;i+=2)
        std::cout<<input[i];
    std::cout<<"  ";
    for(i=1;i<len;i+=2)
        std::cout<<input[i];
        std::cout<<std::endl;
    std::string name;
    name = "aman";
    std::cout<<name<<std::endl;
    name = "wats";
    std::cout<<name<<std::endl;
    return 0;
}
