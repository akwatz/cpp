#include<iostream>
#include<string>
int main(){
    int loop;
    std::cin>>loop;
    while(loop--){
        int num;//to store the number of villages
        std::cin>>num;
        int vill[num];
        std::string elec;//to store the data about villages
        int i,j;
        std::cin>>elec;
        for(i=0;i<num;i++)
            std::cin>>vill[i];
        long long length=0;
        long long left,right;
        for(i=0;i<num;i++){
            if(elec[i]=='0'){
                long long tleft=0,tright=0;
                left=-5000500000;
                right=5000500000;
                if(i>=1){
                    j=i-1;
                    while(elec[j]=='0'&&i>=1){
                        tleft=tleft+vill[j+1]-vill[j];
                        j--;}
                    if(elec[j]=='1')
                        left=vill[j];
                }
                if(i<num-1){
                    j=i+1;
                    while(elec[j]=='0'&&j<num-1){
                        tright=tright+vill[j]-vill[j-1];
                        j++;}
                    if(elec[j]=='1')
                        right=vill[j];
                }
                if(vill[i]-left<=right-vill[i])
                    length=length+vill[i]-left-tleft;
                else
                    length=length+right-vill[i]-tright;
                elec[i]='1';
            }
        }
        std::cout<<length<<std::endl;
    }
    return 0;
}


