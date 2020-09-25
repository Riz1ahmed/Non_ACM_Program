#include<stdio.h>
int main(){
    long long int n,i,sum=0;
    scanf("%lld",&n);
    for (i=1;i<=n;i++)
        printf("Square of %lld=%lld\n",i,i*i),
        sum+=i*i;
    printf("Total sum=%lld\n",sum);
}


