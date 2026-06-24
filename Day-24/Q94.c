#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aaabbcdddd";
    int n=strlen(str);
    int freq[26]={0};
    for(int i=0;i<n;i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            printf("%c%d",i+'a',freq[i]);
            
        }
    }
    
    return 0;
}