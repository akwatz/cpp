#include<iostream>
int main(){
    double val1,val2;
    using std::cout;
    using std::cin;
    using std::endl;
    cout<<"Enter a double value"<<endl;
    cin>>val1;
    cout<<"Enter second double value"<<endl;
    cin>>val2;
    cout<<"Enter one of the following +,-,*,/"<<endl;
    char exp;
    cin>>exp;
    double result=0;
    switch(exp){
        case '+':
            result=val1+val2;
            break;
        case '-':
            result=val1-val2;
            break;
        case '*':
            result=val1*val2;
            break;
        case '/':
            result=val1/val2;
            break;
    }
    cout<<"Result is :"<<result<<endl;
    return 0;
}
