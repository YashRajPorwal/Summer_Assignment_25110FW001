#include<stdio.h>
int main(){
    int a[]={1,2,3};
    int b[]={4,5,6,7,8};
    int c[200];
    int n_a=sizeof(a)/sizeof(a[0]);
    int n_b=sizeof(b)/sizeof(b[0]);
    for(int i=0;i<n_a;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n_b;i++){
        c[n_a+i]=b[i];
    }
    printf("merged array : ");
    for(int i=0;i<(n_a+n_b);i++){
        printf("%d ",c[i]);
    }

    return 0;
}