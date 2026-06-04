#include<stdio.h>
int main(){
    int n;
    printf("enter height of triangle : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=2;j<=i+1;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}