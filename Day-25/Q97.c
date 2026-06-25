#include<stdio.h>
int main(){
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int c[200];
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }
    }
    if(i==n){
        while(j<m){
            c[k]=b[j];
            j++;
            k++;
        }
    }
    else{
        while(i<n){
            c[k]=a[i];
            i++;
            k++;
        }
    }
    printf("merged array : ");
    for(int i=0;i<k;i++){
        printf("%d ",c[i]);
    }

    return 0;
}