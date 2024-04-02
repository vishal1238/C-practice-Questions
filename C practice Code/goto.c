// #Q1. how to use goto statement
// #include <stdio.h>
// void fun(){
//     printf("1\n");
//     goto jerry;
//     tom:
//         printf("2\n");
//         return;
//     jerry:
//         printf("3\n");
//         goto tom;
// }
// int main(){
//     fun();
//     return 0;
// }
// // // Q2. print 1 to 10 through goto function
// #include <stdio.h>
// int print1ToN(int n){
//     int i = 2;
//     int ans = 1;
//     mult:
//         printf("%d", i);
//         if(i %2 == 0) {
//             ans = ans * i;
//         }
//         if (i >= n){
//             return ans;
//         }
//         nextVal:
//             i+=2;
//             goto mult;
// }
// int main(){
//     int  a = (mult(10));
//     printf("%d",&mult);
//     return 0;
// }


// Q3. Write a C program to check if a number is prime or not using the goto statement.

#include <stdio.h>
int main(){
    int num, i = 2;
    printf("Enter a postive integer: ");
    scanf("%d", &num);

    if (num <= 1)
        goto not_prime;

    while (i <= num/2){
        if (num % i == 0)
            goto not_prime;
        i++;
    }
    printf("%d is a prime number\n",num);
    return 0;

    not_prime:
        printf("%d is not a prime number \n",num);
        return 0;
}