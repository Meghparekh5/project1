#include <stdio.h>
int main()
{
    float c;
    float f;
    printf("enter your c=");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("%.1f", f);
}