#include<stdio.h>
int main()
{
    double loan =0;
    double rate =0;
    double  payment =0;
    double balance  =0;
    printf("Enter amout of loan:");
    scanf("%lf",&loan);
    printf("Enter interest rate:");
    scanf("%lf",&rate);
    printf("Enter monthly payment:");
    scanf("%lf",& payment);
    balance =loan*rate*0.01/12+loan;
    balance =balance-payment;
    printf("balance remaining after first payment:%.2lf\n",balance );
    balance =balance+balance *rate*0.01/12;
    balance =balance-payment;
    printf("balance remaining after second payment:%.2lf\n",balance );
    balance =balance+balance*rate*0.01/12;
    balance =balance-payment;
    printf("balance remaining after third payment:%.2lf\n",balance );
    return 0;
}