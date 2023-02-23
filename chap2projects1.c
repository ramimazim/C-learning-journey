#include <stdio.h>
#include <math.h>

int main()
{
    #define PI  3.14
    int r= 10;
    int v= (4.0f/3.0f)*PI*r*r*r;

    printf("Volume: %d",v);
    return 0;
}
