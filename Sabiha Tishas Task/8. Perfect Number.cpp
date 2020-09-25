#include<stdio.h>
int main(){
    int n,i,j, divSum=1;
    scanf("%d",&n);
    for (i=2;i<n;i++)
        if (!(n%i)) divSum+=(n%i + i);
    puts(divSum==n ? "This is a Perfect Number" : "This is not a Perfect Number");
}



