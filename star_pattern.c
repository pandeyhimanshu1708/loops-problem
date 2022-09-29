// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j;
//     for(i=0;i<=5;i++)
//     {
//         for(j=0;j<=5;j++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     }
//     return 0;
// }

//for different symbol with the given condition
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(j<=6-i)
//                 printf("*");
//             else
//                 printf("#");
//         }
//         printf("/n");
//     }
//     printf("/n");
// return 0;
// }

//for entering the given lines
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,lines;
    printf("Enter the given lines:");
    scanf("%d",lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=lines;j++)
        {
            if(j<=lines+1-i)
                printf("*");
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;

}

