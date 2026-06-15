#include<stdio.h>
#include<string.h>
int main(){
    char str[]="institute";
    int vowels=0,consonants=0;
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    printf("number of vowels and consonants in string = %d and %d respectively",vowels,consonants);
    return 0;
}