/*
 Assignment: 19
 Problem: 03
 Topic: switch case control
 Description: Write a program which takes the day number of a week and displays a unique greeting message for the day.
 Date: 14-12-2025
*/
#include<stdio.h>
int main()
{
    int d;
    printf("Enter day number");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
            printf("Monday\nA new week begins-new chances, fresh energy, and quiet strength to start strong.\n");
            break;
        case 2:
            printf("Tuesday\nMomentum builds today-keep going, progress grows one steady step at a time.\n");
            break;
        case 3:
            printf("Wednesday\nMidweek balance-pause, realign, and move forward with clarity.\n");
            break;
        case 4:
            printf("Thursday\nConfidence day-most of the work is done, now let determination lead\n");
            break;
        case 5:
            printf("Friday\nEffort meets reward-finish with pride and welcome what's next\n");
            break;
        case 6:
            printf("Saturday\nBreathe easy today-time to enjoy, explore, and recharge your spirit\n");
            break;
        default:
            printf("Sunday\nSlow down, reflect, and prepare gently for a new beginning.\n");       
    }
    return 0;
}