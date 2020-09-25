#include<stdio.h>
int main(){
    int n,i,j,c=0;
    scanf("%d",&n);
    printf("The first %d prime is: ",n);
    for (i=2; ;i++){
        if (c==n) break;
        int prime=true;
        for (j=2; j*j<=i; j++)
            if (!(i%j)) prime=false;
        if (prime==true)
            printf("%d ",i), c++;
    }
    puts("");
}


