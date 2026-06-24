#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello";
    int freq[26]={0};
    for(int i=0;str[i]!='\0';i++){
        if(freq[str[i]-'a']==0){
            printf("%c",str[i]);
            freq[str[i]-'a']=1;
        }
    }
    
    return 0;
}