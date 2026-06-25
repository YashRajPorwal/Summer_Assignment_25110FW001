#include<stdio.h>
#include<string.h>
int main(){
    char a[]="christiano";
    char b[]="ronaldo";
    int freq1[26]={0};
    int freq2[26]={0};
    for(int i=0;a[i]!='\0';i++){
        freq1[a[i]-'a']++;
    }
    for(int i=0;b[i]!='\0';i++){
        freq2[b[i]-'a']++;
    }
    printf("common characters are : ");
    for(int i=0;i<26;i++){
        if(freq1[i]>0 && freq2[i]>0){
            printf("%c ",i+'a');
        }
    }

    return 0;
}