#include<stdio.h>
#include<string.h>
int main(){
    char str[]="virat";
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    fputs(str,stdout);
    return 0;
}