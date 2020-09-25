#include<stdio.h>
int main(){
    int n,i,j;
    printf("Input array size (Must n>=2): ");
    scanf("%d",&n);
    int a[n+5];

    printf("Input the array values: ");
    for (i=0;i<n;i++) scanf("%d",a+i);

    for (i=0;i<n;i++)
        for (j=0; j<n; j++)
            if (a[i]>a[j])
                a[i]^=a[j]^=a[i]^=a[j];

    printf("Second max value is: %d\n",a[1]);
}
