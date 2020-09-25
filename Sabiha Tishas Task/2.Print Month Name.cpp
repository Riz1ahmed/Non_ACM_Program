#include<stdio.h>
int main(){
    char month[13][20]={
        "This is 0 Index",
        "january",
        "February",
        "March",
        "April",
        "May",
        "Jun",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};
    int n;
    scanf("%d",&n);
    printf("%s\n",month[n]);
}
