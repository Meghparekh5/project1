#include<stdio.h>
int main()
{
    int score;
    char ch;
    printf("enter your score=");
    scanf("%d",&score);
    ch=(score>=90)? 'A':
    (score>=80)?'B':
    (score>=70)?'C':
    (score>=60)? 'D':
    'f';
    printf("\n%c",ch);
    switch(ch)
    {
        case 'A':
        printf("\nexcellent work");
        break;
        case 'B':
        printf("\nwell done");
        break;
        case 'C':
        printf("\ngood job");
        break;
        case 'D':
        printf("\nyou passed");
        break;
        case 'F':
        printf("\nsorry you failed");
    }
    if(ch=='A'|| ch=='B'|| ch=='C' )
    {
        printf("\ncongratulation");
    }
    else
    {
        printf("\ntry again next time");
    }

  

}