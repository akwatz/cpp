#include<iostream>
#include<string.h>
std::string getName(){
    std::cout<<"Enter you full name"<<std::endl;
    std::string name;//to store the name of the user
    std::getline(std::cin,name);
    return name;
}
std::string getAge(){
    std::cout<<"Enter your age"<<std::endl;
    std::string age;//to store the age of the user
    std::getline(std::cin,age);
    return age;
}
int main(){
    std::string name,age;
    name=getName();
    age=getAge();
    std::cout<<"Your name is :"<<name;
    int length=name.length();
    std::cout<<"Your age is :"<<age;
    std::cout<<"You've lived ";
    std::cout<<static_cast<int>(age)/length;
    std::cout<<" yrs in your name\n";
    return 0;
}
