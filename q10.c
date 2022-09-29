// Write a program to reverse a given number

#include<stdio.h>



    
int main()
{
    int n,ans;
    printf("enter the numbers:");
    scanf("%d",&n);

    while(n!=0)
    {
        int digit = n%10;
        ans = (ans*10)+digit;
        n = n/10;
    }
    printf("reverse number are %d",ans);
}