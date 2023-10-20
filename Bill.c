#include<stdio.h>
int main()
{
    int money=0;
    int twenty=0;
    int ten=0;
    int five=0;
    int one=0;
    printf("Enter a dollar amount：");
    scanf("%d",&money);
    if(money>0)
    {
    twenty=money/20;
    money=money-twenty*20;
    ten= money /10;
    money=money-ten*10;
    five=money/5;
    money=money-five*5;
    one=money;
    printf("$20 bills: %d \n", twenty);
    printf("$10 bills: %d   \n",ten);
    printf("$5 bills: %d   \n",five);
    printf("$1 bills: %d   \n",one);
    }
    else
    {
        printf("你输入的金额有误，请重新输入");
    }


return 0;
}