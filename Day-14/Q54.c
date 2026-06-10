#include<stdio.h>
int main(){
    int a[]={3,6,7,3,1,2,4,9,3,8,9,3,10};
    int n;
    int freq=0;
    printf("enter your element : ");
    scanf("%d",&n);
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]==n){
            freq++;
        }
    }
    printf("frequency of %d = %d",n,freq);
    return 0;
}