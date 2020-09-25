#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        for (j=i; j<n; j++) putchar(' ');
        for (j=i; j<i+i; j++) printf("%d",j);
        for (j=i+i-2; j>=i; j--) printf("%d",j);
        puts("");
    }
}
