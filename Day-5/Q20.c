#include<stdio.h>
#include<limits.h>
void largestPrimeFactor(int n){
    int largest=INT_MIN;
    for(int i=1;i<n;i++){
        if(n%i==0){
            int prime=1;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    prime=0;
                }
            }
            if(prime==1){
                if(largest<i){
                    largest=i;
                }
            }
        }
    }
    printf("%d",largest);
}
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    largestPrimeFactor(n);
    return 0;
}