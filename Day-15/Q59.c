#include<stdio.h>
int main(){
    int a[]={18,17,7,45,23};
    int n=sizeof(a)/sizeof(a[0]);
    int j=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=j;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}