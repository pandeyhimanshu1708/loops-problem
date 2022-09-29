// Write a program to calculate sum of first N even natural numbers

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum = sum + (2*i);
        
    }
    printf("sum are %d",sum);
    return 0;
}



#include<stdio.h>

int evenSum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + (2*i);

    }
    return sum;
}

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    int sumof = evenSum(n);

    printf("sum are %d",sumof);
    return 0;
}