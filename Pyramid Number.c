///      1
///    2 3 2
///  3 4 5 4 3
///4 5 6 7 6 5 4
#include<stdio.h>
int main(){
    int row,i,j,k,sp;
    scanf("%d",&row);
    for (i=1,j=1,sp=row-1; i<=row; i++,j+=2,sp--){
        for (k=1; k<=sp; k++) printf("   ");
        for (k=i; k<=j; k++)
            printf("%2d ",k);
        for (k=j-1; k>=i; k--)
            printf("%2d ",k);
        puts("");
    }
    return 0;
}
