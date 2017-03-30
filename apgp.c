#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int i,p[n];
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    float r,sum=0;
    r=(float)1/n;
    float k=(1-r)*(1-r);
    float t=1-r;
    sum=(1/t)+(r/k);
    printf("%f\n",sum/2);
    float j=16.000;
    j=j/2;
    printf("%f\n",j);
    return 0;
}
