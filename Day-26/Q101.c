#include<stdio.h>
#include<stdlib.h> //contains rand() & srand() fxns for random number
#include<time.h> //contains time() fxn to create a different random number
int main(){
    int num,guess,attempt=0;
    srand(time(0));
    num=rand()%100+1;
    printf("Guess Between 1-100\n");

    while(1){
        printf("Make a Guess : ");
        scanf("%d",&guess);
        attempt++;

        if(num<guess){
            printf("Try Again! (Guess Lesser)\n\n");
        }
        else if(num>guess){
            printf("Try Again! (Guess Higher)\n\n");
        }
        else {
            printf("Congratulations!!! You Guessed The Number\nThe Number Was %d\nTotal Attempts : %d",num,attempt);
            break;
        }
    }
    return 0;
}