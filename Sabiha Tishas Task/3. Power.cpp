#include<stdio.h>
int main(){
    long long int b,n,i,pw=1;
    scanf("%lld %lld",&b,&n);
    for (i=0;i<n;i++)
        pw*=b;
    printf("%lld\n",pw);
}

