#include <stdio.h>

int main(void)
{
    //Chp 2 project 7
    int amount=0;
    int twen, ten, fiv, one;
    printf("Enter amount:");
    scanf("%d", &amount);

    twen = amount/20;
    amount -= twen*20;
    ten = amount/10;
    amount -= ten*10;
    fiv = amount/5;
    amount -= fiv*5;
    one = amount/1;

    printf("$20 bills: %d\n", twen);
    printf("$10 bills: %d\n", ten);
    printf("$5  bills: %d\n", fiv);
    printf("$1  bills: %d\n", one);

    return 0;
}
