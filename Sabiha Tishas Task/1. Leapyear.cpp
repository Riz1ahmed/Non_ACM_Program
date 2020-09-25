#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (!(n%400)) puts("This is a leap tear");
    else if (!(n%100)) puts("This is not leap year");
    else if (!(n%4)) puts("This is leap year");
    else puts("This is not leap year");
}
