// Write a program to check whether a given number is a Prime number or
// not

// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//         if(n%2==0){
//             printf("is not prime number\n");
//         }
//         else{
//             printf("is a prime number\n");
//         }
    
//     return 0;
// }

//by using function

#include<stdio.h>

int isprime(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    
}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    int ans = isprime(n);

    printf( "prime number",ans);
    return 0;
}

