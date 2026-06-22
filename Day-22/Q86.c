#include <stdio.h>
int main() {
    char sentence[200];
    int i, count = 1;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for(i = 0; sentence[i] != '\0'; i++) {
        if(sentence[i] == ' ' && sentence[i+1] != ' ') {
            count++;
        }
    }

    printf("Number of words = %d", count);
    return 0;
}