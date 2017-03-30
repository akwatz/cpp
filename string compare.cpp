#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int i=0;
   string s[n];
   for(i=0;i<n;i++)
        cin>>s[i];
   int q;
   cin>>q;
   string query[q];
   for(i=0;i<q;i++){
    cin>>query[i];
    int count(0);
    for(int j=0;j<n;j++){
        if(s[j].compare(query[i])==0)
            count++;
    }
    cout<<count<<endl;
   }
   return 0;
}
