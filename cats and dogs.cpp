#include <iostream>
using namespace std;
bool isTrue(const long &c,const long &d,const long &l){
    if(l%4!=0)
        return false;
    long lMin(0),lMax(0);
    if(c>2*d)
        lMin = 4*(c-d);
    else
        lMin = 4*d;
    lMax = 4*(c+d);
    if(l>=lMin && l<=lMax)
        return true;
    else
        return false;
}
int main(){
    int tCase;
    cin>>tCase;
    while(tCase--){
        long c,d,l;
        cin>>c>>d>>l;
        if(isTrue(c,d,l))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
