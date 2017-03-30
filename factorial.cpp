#include<iostream>
long long fact(int n){
  long long f[n];
  f[0]=1;
  for(int i=1;i<n;i++)
    f[i]=(i+1)*f[i-1];
  return f[n-1];
}
int main(){
    long long n=fact(35);
    std::cout<<n<<std::endl;
    return 0;
}
