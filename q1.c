// Write a program to calculate sum of first N natural numbers


#include<stdio.h>

int main()
{
    int n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum = 0;
        sum = sum+(i*(i+1)/2);
    }
    printf("sum of the numbers are %d", sum);
    return 0;
}