#include<iostream>
int algo(int n)
{
        int count=1;
        while(n!=1){
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            count++;
        }
        return count;
}
int main(){
    int n1,n2,i;
    while(std::cin>>n1>>n2){
            int temp1=n1,temp2=n2;
    if(n1>n2){
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    int count=0,lcount=0;
    for(i=n1;i<=n2;i++){
        count=algo(i);
        if(count>=lcount)
            lcount=count;
    }
    std::cout<<temp1 <<' ' <<temp2 <<' '<<lcount<<std::endl;
    }
    return 0;
}
