// 3. Write a program to calculate sum of first N odd natural numbers


#include<stdio.h>

int main()
{
    int n,sum = 0;
    
    printf("Enter the number:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        sum = sum + ((2*i)-1);
    }

    printf("Sum are %d",sum);
    return 0;
}


//By function

#include<stdio.h>

int oddSum(int n)

{   
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + ((2*i)-1);
    }
    return sum;
}

int main()

{
    int n;

    printf("enter the value of number:");
    scanf("%d",&n);

    int ans = oddSum(n);

    printf("sum are %d",ans);
    return 0;
}