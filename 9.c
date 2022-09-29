// 9. Write a program to calculate LCM of two numbers

// #include<stdio.h>

// int main()
// {
//     int a,b,l;
//     printf("enter the value of a and b: ");
//     scanf("%d%d",&a,&b);

//     for(l=1;l<a*b;l++)
//     {
//         if(l%a==0 && l%b==0){
//             break;
//         }
//     }
//     printf("lcm of two number are %d",l);
//     return 0;
// }


//using function

#include<stdio.h>

int lcmNumber(int a,int b){
    for(int l=1;l<=a*b;l++){
        if(l%a==0 && l%b==0)
        {
            break;
        }
        return ;
    }
}

int main(){
    int a,b;
    printf("entre the number:");
    scanf("%d%d",&a,&b);

   int ans =  lcmNumber(a,b);

   printf("lcm is %d",ans);
   return 0;
}



