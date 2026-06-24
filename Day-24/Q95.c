#include<stdio.h>
#include<string.h>
int main(){
    char str[]="i am inevitable";
    int maxCount = 0;
    int count = 0;
    char word[100], longest[100];
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            word[j++] = str[i];
            count++;
        }
        else{
            word[j] = '\0';

            if(count > maxCount){
                maxCount = count;
                strcpy(longest, word);
            }
            count = 0;
            j = 0;
        }
    }
    word[j] = '\0';
    if(count > maxCount){
        strcpy(longest, word);
    }
    printf("longest word: %s\n", longest);

    return 0;
}