#include<stdio.h>
int main(){
    char str1[]="care";
    char str2[]="race";
    int freq1[26]={0};
    int freq2[26]={0};
    for(int i=0;str1[i]!='\0';i++){
        freq1[str1[i]-'a']++; // strores count at indexes
    }
    for(int i=0;str2[i]!='\0';i++){
        freq2[str2[i]-'a']++;
    }
    int flag=1;
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){ // strore count at indexes
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("strings are anagram");
    }
    else{
        printf("strings are not anagram");
    }

    return 0;
}