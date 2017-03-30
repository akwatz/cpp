#include<iostream>
#include<string>
int main(){
    std::string str1;
    std::cin>>str1;
   // std::cin>>str2;
    int len=str1.length();
    int i=0;
    std::cout<<str1;
    for(i=0;i<len;i++)
      std::cout<<str1[len-1-i];
    std::cout<<std::endl;
     return 0;
}
