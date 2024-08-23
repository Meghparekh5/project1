#include <stdio.h>
int main()
{
    int basicsalary, HRA, DA, TA, Grosssalary;
    printf("enter your net salary=");
    scanf("%d", &basicsalary);
    HRA = basicsalary * 10 / 100;
    DA = basicsalary * 5 / 100;
    TA = basicsalary * 8 / 100;
    Grosssalary = basicsalary + HRA + DA + TA;
    printf("Gross salary is = %d", Grosssalary);
}