#include <stdio.h>
int main()
{
    int fa, sa, ta;
    printf("enter your first angle= ");
    scanf("%d", &fa);
    printf("enter your second angle= ");
    scanf("%d", &sa);
    ta = 180 - fa - sa;
    printf("third angle is = %d", ta);
}