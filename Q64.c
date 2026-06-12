#include<stdio.h>
int main(){
    int a[]={6,3,1,3,4,8,9,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    int freq[10]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    printf("modified array : ");
    for(int i=0;i<n;i++){
        if(freq[a[i]]>0){
            printf("%d ",a[i]);
            freq[a[i]]=0;
        }
    }

    return 0;
}