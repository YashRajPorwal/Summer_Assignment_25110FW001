#include<stdio.h>
int main(){
    int n;
    printf("enter height of triangle : ");
    scanf("%d",&n);
    char a=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c",a);
        }
        a++;
        printf("\n");
    }
    return 0;
}