#include<stdio.h>
int main(){
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int j,n,prod=1;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            prod *= 2;
            prod %= 100000;
        }
        printf("%d\n",(prod-1 + 100000)%100000);
    }
    return 0;
}
