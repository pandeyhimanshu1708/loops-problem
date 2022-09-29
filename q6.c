// Write a program to calculate factorial of a number

#include<stdio.h>

int factorial(n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d", &n);

    int ans = factorial(n);

    printf("factorial of the number is %d",ans);
    return 0;
}