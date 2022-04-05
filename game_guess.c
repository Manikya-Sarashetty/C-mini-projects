#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//pgm to guess the number and print the number of attempts to guess the number
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100+1;
    do{
        printf("Enter the guess\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Enter lower number\n");
        }
        else if(guess<number)
        {
            printf("Enter higher number\n");
        }
        else{
            printf("you have guesses it in %d attempts",nguess);
        }
        nguess++;
    }while(guess!=number);
}