#include<stdio.h>
int main(){
    int a[]={7,18,32,7,18,5,5};
    int n=sizeof(a)/sizeof(a[0]);
    printf("duplicates = ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d ",a[j]);
            }
        }
    }
    return 0;
}