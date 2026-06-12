#include<stdio.h>
int main(){
    int a[]={45,0,18,23,0,17,0,7};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=n-1;i>0;i--){
        for(int j=n-2;j>=0;j--){
            if(a[j]==0){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}