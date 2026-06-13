#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int b[]={4,5,6,7,8,9,0};
    int c[200];
    int n_a=sizeof(a)/sizeof(a[0]);
    int n_b=sizeof(b)/sizeof(b[0]);

    //taking intersection 

    int freq[10]={0};
    for(int i=0;i<n_a;i++){
        freq[a[i]]++;
    }
    printf("intersection of arrays : ");
    for(int i=0;i<n_b;i++){
        if(freq[b[i]]>0){
            printf("%d ",b[i]);
            freq[b[i]]=0;

        }
    }

    return 0;
}