#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //for random number generator
    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    // r= rock  p=paper  s=scissor
    char you, com; //com=computer  you=you
    if (number < 33)
    {
        com = 'r';
    }
    else if (number >= 33 && number < 66)
    {
        com = 'p';
    }
    else
    {
        com = 's';
    }
    // printf("Computer Choose %c\n", com);
    printf("Enter 'r' for rock 'p' for paper 's' for scissor.\n");
    scanf("%c", &you);
    if (you != 'r' && you != 'p' && you != 's')
    {
        printf("You choose wrong command \n");
    }
    if (you == com)
    {
        printf("Game Draw \n");
    }
    if (you == 'r' && com == 'p')
    {
        printf("You Lose \n");
    }
    else if (you == 'r' && com == 's')
    {
        printf("You Win \n");
    }
    else if (you == 's' && com == 'r')
    {
        printf("You Lose \n");
    }
    else if (you == 's' && com == 'p')
    {
        printf("You Win \n");
    }
    else if (you == 'p' && com == 'r')
    {
        printf("You Win \n");
    }
    else if (you == 'p' && com == 's')
    {
        printf("You Lose \n");
    }
    return 0;
}