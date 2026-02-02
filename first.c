#include<stdio.h>
struct date
{
    int d,m,y;
};
struct date inputDate();
void showDate(struct date);
int main()
{
    struct date d1={22,9,2022};
    struct date d2,d3;
    d2.d=23;
    d2.m=9;
    d2.y=2022;
    d3=inputDate();
    showDate(d3);
    printf("\n");
    return 0;
}
void showDate(struct date somedate)
{
    printf("%d %d %d",somedate.d,somedate.m,somedate.y);
}
struct date inputDate()
{
    struct date mydate;
    printf("Enter Date: ");
    scanf("%d/%d/%d",&mydate.d,&mydate.m,&mydate.y);
    return mydate;
}