// Write a program to count digits in a given number

// #include<stdio.h>

// int main()
// {
//     int n,count;
//     printf("enter the number:");
//     scanf("%d", &n);

//     for(int i=1;i<=n;i++){
//         printf("%d\n", i);
//     }

   
//     return 0;
// }

//count the digit

#include<stdio.h>

int countdigit(long long n ){
    if(n == 0){
        return 1;
    }
    int count = 0;
    while(n!=0)
    {
        n = n/10;
        ++count;
    }
    return count;
}

int main()

{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);

    int ans = countdigit(n);

    printf("total number of the countung numbers are %d",ans)
    ;
    return 0;
}