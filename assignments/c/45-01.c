/*
Assignment: 45
Problem: 01
Topic: Structure
Description: Write a program to calculate the difference between two time periods.
Date: 03-01-2025
*/
#include<stdio.h>
struct Time
{
    int hh,mm,ss;
};
struct Time timeDifference(struct Time,struct Time);
struct Time inputTime();
void displayTime(struct Time);
int main()
{
    struct Time time1,time2,diff;
    time1=inputTime();
    time2=inputTime();
    diff=timeDifference(time1,time2);
    printf("Time difference: ");
    displayTime(diff);
    printf("\n");
    return 0;
}

struct Time timeDifference(struct Time t1,struct Time t2)
{
    struct Time tempTime;
    int descision;
    descision=t1.hh>t2.hh?1:t2.hh>t1.hh?0:t1.mm>t2.mm?1:t2.mm>t1.mm?0:t1.ss>t2.ss?1:0;
    if(descision)
    {
        if (t1.ss<t2.ss)
        {
            t1.mm--;
            t1.ss+=60;
        }
        tempTime.ss=t1.ss-t2.ss;
        if(t1.mm<t2.mm)
        {
            t1.hh--;
            t1.mm+=60;
        }
        tempTime.mm=t1.mm-t2.mm;
        tempTime.hh=t1.hh-t2.hh;
        return tempTime;
    }
    else
    {
        if(t2.ss<t1.ss)
        {
            t2.mm--;
            t2.ss+=60;
        }
        tempTime.ss=t2.ss-t1.ss;
        if(t2.mm<t1.mm)
        {
            t2.hh--;
            t2.mm+=60;
        }
        tempTime.mm=t2.mm-t1.mm;
        tempTime.hh=t2.hh-t1.hh;
        return tempTime;
    }
}

struct Time inputTime()
{
    struct Time tempTime;
    printf("Enter time in format hh:mm:ss  ");
    scanf("%d:%d:%d",&tempTime.hh,&tempTime.mm,&tempTime.ss);
    return tempTime;
}

void displayTime(struct Time t)
{
    printf("%d:%d:%d",t.hh,t.mm,t.ss);
}