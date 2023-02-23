#include <stdio.h>

int main(void)
{
    // Chap 2 project 8
    float amount, intr, intrp, monp, fir, sec, thr;

    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &intr);
    printf("Enter monthly payment: ");
    scanf("%f", &monp);

    intrp = (intr/100)/12;

    fir = amount-monp+(intrp*amount);
    printf(" Balance remaining after first payment: %.2f\n", fir);


    sec = fir-monp+(intrp*fir);
    printf(" Balance remaining after second payment: %.2f\n", sec);


    thr = sec-monp+(intrp*sec);
    printf(" Balance remaining after third payment: %.2f\n", thr);

    return 0;
}

