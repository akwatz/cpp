#include<iostream>
int getInput(){
    std::cout<<"Enter a number\n";
    int num;
    std::cin>>num;
    return num;
}
char getOperator(){
    std::cout<<"Enter the operators from + - / *\n";
    char op;//to store operator
    std::cin>>op;
    if(op!='+'&&op!='-'&&op!='/'&&op!='*')
        std::cout<<"Invalid Operator\n";
    else
        return op;
}
int main(){
    int num1=getInput();
    int num2=getInput();
    int result(0);
    char op=getOperator();
    switch(op){
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '/':
            result=num1/num2;
            break;
        case '*':
            result=num1*num2;
            break;
    }
    std::cout<<"The result is :"<<result;
    return 0;
}
