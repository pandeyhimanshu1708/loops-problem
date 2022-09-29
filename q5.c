// Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>

int cubeNumber(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + (i*i*i*1);
    }
    return sum;
}

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    int ans = cubeNumber(n);

    printf("Cube of first natural numbers are %d",ans);
    return 0;
}

