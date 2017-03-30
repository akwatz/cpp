#include <iostream>
using namespace std;
 
long findTrailingZeros(int  n)
{

    long count = 0;

    for (int i=5; n/i>=1; i *= 5)
          count += n/i;
 
    return count;
}
 
int main()
{
    int tcase;
    cin>>tcase;
    while(tcase--){
        int a,b,k;
        cin>>a>>b>>k;
        long no1(0),no2(0);
        no1=findTrailingZeros(b);
        no2=findTrailingZeros(a-1);
        long result=no1-no2;
        result*=k;
        cout<<result<<endl;
    }
    return 0;
}