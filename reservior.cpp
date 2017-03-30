#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isStable(int m,int n,vector<string> res){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            switch(res[i][j]){
            case 'A' :
                if(i>0 && res[i-1][j] != 'A')
                    return false;
                if(j>0 && res[i][j-1] == 'W')
                    return false;
                if(j<m-1 && res[i][j+1] == 'W')
                    return false;
                break;
            case 'B':
                if(i<n-1 && res[i+1][j] != 'B')
                    return false;
                break;
            case 'W':
                if(j==0)
                    return false;
                if(j==m-1)
                    return false;
                if(i>0 && res[i-1][j]=='B')
                    return false;
                if(i<n-1 && res[i+1][j]=='A')
                    return false;
                 if(j>0 && res[i][j-1]=='A')
                    return false;
                 if(j<m-1 && res[i][j+1]=='A')
                    return false;
            }
        }
    }
    return true;
}
int main(){
    int tCase;
    cin>>tCase;
    while(tCase--){
        int n,m;
        cin>>n>>m;
        vector <string> res;
        for(int i=0;i<n;i++){
            string c;
            cin>>c;
            res.push_back(c);
        }
        isStable(m,n,res);
    }
    return 0;
}
