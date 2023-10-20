#include<stdio.h>
int main()
{   int year = 0;
    int month = 0;
    int day = 0;
    printf("Enter a date(mm/dd/yyyy):");
    scanf("%2d/%2d/%4d",&month,&day,&year);
    printf("You entered the date %04d%02d%02d",year,month,day);
    return 0;
}