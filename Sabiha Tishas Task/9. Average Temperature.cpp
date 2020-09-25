#include<stdio.h>
int main(){
    int n,i;
    float mn=1e5,mx=-1e5,x;
    printf("Please input number of total day: ");
    scanf("%d",&n);
    printf("Now input temp. of each day(s):\n");

    for (i=1;i<=n;i++){
        scanf("%f",&x);
        if (mn>x) mn=x;
        if (mx<x) mx=x;
    }
    printf("%f",(mn+mx)/2.0);
}
