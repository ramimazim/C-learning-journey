#include <stdio.h>

int main(void)
{
    int height, length, width, volume;

    printf("Enter height:");
    scanf(" %d", &height);
    printf("Enter length:");
    scanf(" %d", &length);
    printf("Enter width:");
    scanf(" %d", &width);

    volume = height * length * width;

    printf("Volume is: %d\n", volume);
    printf("Dimensions are: %d x %d x %d", height, length, width);


}
