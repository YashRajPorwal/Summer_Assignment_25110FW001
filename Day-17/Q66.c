#include<stdio.h>
int main(){
    int a[]={1,2,3};
    int b[]={2,3,4};
    int c[200];
    int n_a=sizeof(a)/sizeof(a[0]);
    int n_b=sizeof(b)/sizeof(b[0]);

    //merging the arrays

    for(int i=0;i<n_a;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n_b;i++){
        c[n_a+i]=b[i];
    }
    
    //removing duplicates

    int freq[5]={0};
    for(int i=0;i<(n_a+n_b);i++){
        freq[c[i]]++;
    }
    
    printf("union of arrays : ");
    for(int i=0;i<(n_a+n_b);i++){ 
        if(freq[c[i]]>0){
            printf("%d ",c[i]);
            freq[c[i]]=0;
        }
    }
    return 0;
}