#include<iostream>
int readNumber();
void writeResult(int);
int main()
{
    int num1,num2;
    int sum;
    num1=readNumber();
    num2=readNumber();
    sum=num1+num2;
    writeResult(sum);
    return 0;
}
int readNumber()
{
    int num;
    std::cin>>num;
    return num;
}
void writeResult(int sum)
{
    std::cout<<sum;
}
