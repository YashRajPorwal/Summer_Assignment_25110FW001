#include<stdio.h>
int main(){
    int n;
    printf("ENTER YOUR NUMBER : ");
    scanf("%d",&n);
    int sum = 0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }

    printf("%d",sum);
    return 0; 
}
