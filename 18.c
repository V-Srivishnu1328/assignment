#include<stdio.h>
int main()
{
    int num,a=0,j=0,i=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(a=0;a<num-(i+1);a++)
            printf(" ");
        for(j=0;j<i+1;j++)
        printf("* ");
        printf("\n");
    }
}
