#include<stdio.h>
int main(){
    int a[]={2,5,1,2,3,5,1,2,7,8,1};
    int n=sizeof(a)/sizeof(a[0]);
    int maxfreq=0;
    int maxfreqelement;
    for(int i=0;i<n;i++){
        int freq=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                freq++;
            }
        }
        if(freq>maxfreq){
            maxfreq=freq;
            maxfreqelement=a[i];

        }
    }
    printf("element with maximum frequency = %d",maxfreqelement);
    return 0;
}