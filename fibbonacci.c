#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //long long t;
    //scanf("%lld",&t);
   //while(t--)
    //{
       long long n,previous=1,current=2,next=3,count=3,sum=2,temp1,temp2;
        scanf("%lld",&n);
        while(next<=n){
            temp1=next;
            next=next+current;
            temp2=current;
            current=temp1;
            previous=temp2;
            if(next%2==0)
                sum=sum+next;
            count++;
        }
        printf("%lld\n",sum);
   // }
    return 0;
}
