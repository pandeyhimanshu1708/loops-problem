// Write a program to calculate sum of squares of first N natural numbers

// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);

   
//     int sum = (n * (n + 1) * (2 * n + 1)) / 6;
    
//     printf("sum of sqaure of %d is %d", n,sum);
//     return 0;

// }

//by using loop

#include<stdio.h>

int squareNumber(n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + (i*i*1);
    }

    return sum;
}

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    int ans = squareNumber(n);

    printf("sum of square of first numbers are %d",ans);
    return 0;
}