#include<stdio.h>
int main(){
    int n;
    printf("enter height of triangle : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char a=65;
        for(int j=1;j<=i+1;j++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}