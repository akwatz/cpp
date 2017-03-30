#include<stdio.h>
int main(){
    int p[]={1,2,2,3,3,4,4,5,5,6};
    int i,j=0;
    int b[10];
    int c=p[0];
    b[0]=1;
    for(i=1;i<10;i++){
        if(c==p[i])
            b[j]=b[j]+1;
        else{
            j++;
            b[j]=1;
            c=p[i];
        }
    }
    for(i=0;i<=j;i++)
        printf("%d\t",b[i]);
}
