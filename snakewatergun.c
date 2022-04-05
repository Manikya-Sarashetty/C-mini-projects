// Water will win from gun , gun will win from snake, snake will win from water.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char comp,char you)
{
    //calculate all the possibilities of both choices.
    if(comp==you)
    return 0;
    if(comp =='s' && you=='w')
    {
        return -1;
    }
    else if(comp =='w' && you=='s')
    {
        return 1;
    }
    if(comp =='s' && you=='g')
    {
        return 1;
    }
    else if(comp =='g' && you=='s')
    {
        return -1;
    }
    if(comp =='w' && you=='g')
    {
        return 1;
    }
    else if(comp =='g' && you=='w')
    {
        return 1;
    }


}

int main()
{
    char comp,you;
    int res;
    srand(time(0));
    int num = rand()%100+1;
    if(num<=33)
    {
        comp='s';
    }
    else if(num>33 && num<=66)
    {
        comp='g';
    }
    else{
        comp='w';
    }
    printf("Enter 's' for snake,'w' for water,'g' for gun\n");
    scanf("%c",&you);
    res = snakewatergun(comp,you);
    if(res==0)
    {
        printf("comp is %c and you have choosen %c and draw match",comp,you);
    }
    else if(res==1)
    {
        printf("comp is %c and you have choosen %c and you won",comp,you);
    }
    else if(res==-1)
    {
        printf("comp is %c and you have choosen %c and computer won",comp,you);
    }
}