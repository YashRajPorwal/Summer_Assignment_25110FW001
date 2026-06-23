#include<stdio.h>
int main(){
    char str[]="thiruvananthapuram";
    int freq[26]={0};
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]-'a']++;
    }
    int maxFreq=0;
    char maxChar;
    for(int i=0;i<26;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            maxChar=i+'a';
        }
    }
    printf("maximum occurring character = %c",maxChar);
    return 0;
