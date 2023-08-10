#include <stdio.h>
int main(){
    int n,i;
    printf("enter the numberof terms");
    scanf("%d",&n);
    printf("enter number series: ");
    for(i=1;i<=n;i++){
        printf("%d",i);
    }
    return 0;
}
