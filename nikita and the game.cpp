#include<bits/stdc++.h>
using namespace std;
void game(int arr[],int beg,int end,int &level,int sum[],int &j){
  cout<<level<<"head"<<endl;
   int i(0),m_level=level,mid;
    int cs[end-beg+1];
    cs[beg]=arr[beg];
    for(i=beg+1;i<=end;i++)
        cs[i]=cs[i-1]+arr[i];
    if(cs[end]%2==1){
        sum[j]=m_level;
        j++;
        return;
    }
    else{
        for(i=beg;i<=end;i++){
            if(cs[i]==cs[end]/2){
                level+=1;
                m_level=level;
                mid=i;
                break;
            }
            else{
                sum[j]=m_level;
                j++;
                return;
            }
        }   cout<<level<<"call"<<endl;
            game(arr,beg,mid,level,sum,j);
            level=m_level;
            game(arr,i+1,end,level,sum,j);

    }
}
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        std::cin>>arr[i];
    int level=0;
    int sum[n];
    int j=0;
    game(arr,0,n-1,level,sum,j);
    int max=0;
    for(int i=0;i<j;i++){
        if(sum[i]>max)
            max=sum[i];
    }
    std::cout<<max<<std::endl;
    return 0;
}
