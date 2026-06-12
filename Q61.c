#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    int sum1=0,sum2=0;
    for(int i=1;i<=10;i++){
        sum1+=i;
    }
    for(int i=0;i<n;i++){
        sum2+=a[i];
    }
    printf("missing number = %d",sum1-sum2);
    return 0;
}