#include<stdio.h>
int main(){
    int a[]={1,2,0,3,6,4,5};
    int b[]={4,5,6,7,8,9,0};
    int n_a=sizeof(a)/sizeof(a[0]);
    int n_b=sizeof(b)/sizeof(b[0]);

    int freq[7]={0};
    for(int i=0;i<n_b;i++){
        freq[b[i]]++;
    }
    printf("common elements : ");
    for(int i=0;i<n_a;i++){
        if(freq[a[i]]>0){
            printf("%d ",a[i]);
            freq[a[i]]=0;
        }
    }
    return 0;
}