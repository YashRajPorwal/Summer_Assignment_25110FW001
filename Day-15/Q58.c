#include<stdio.h>
int main(){
    int a[]={18,45,7,23,17};
    int n=sizeof(a)/sizeof(a[0]);
    int j=a[0];
    for(int i=1;i<=n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=j;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}