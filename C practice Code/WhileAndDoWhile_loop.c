// // Q1. Question: Write a C program to print the first 10 natural numbers using a while loop.
// #include <stdio.h>
// int main(){
//     int i = 1;
//     while (i <= 10) {
//         printf("%d",i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// Q2. Do-While Loop:
// Question: Write a C program to find the factorial of a number using a do-while loop.

#include <stdio.h>
int main(){
    int n, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= n);
    printf("Factorial of %d: %d\n",n, factorial);

    return 0;
}

// #include <stdio.h>
// int main(){
//     int a, b, c, max;
//     printf("Enter three digit: ");
//     scanf("%d%d%d",&a, &b, &c);

//     max=(a>b)?(a>c?a:c) : (b>c ? b:c);
//     printf("%d",max);
// }

// // Q1. fibonacci series
// #include <stdio.h>
// int main(){
//     int n, first=0, second=1, next;
//     scanf("%d",&n);
//     if (n==1){
//         printf("%d",first);
//     } else{
//         printf("%d %d",first,second);
//         next = first + second;
//         int i = 2;
//         while(1<n){
//             printf("%d",next);
//             first = second;
//             second = next;
//             next = first + second;
//             i++;
//         }
//     }
// }

// // Q2.
// #include <stdio.h>
// int main(){
//     int a, b, n;
//     char x;
//     scanf("%d %d %c",&a, &b, &x);

//     switch(a){
//         case '+':
//             n = (a+b);
//             printf("%d",n);
//             break;
//         case '-':
//             n = (a-b);
//             printf("%d",n);
//             break;
//         case '*':
//             n = (a*b);
//             printf("%d",n);
//             break;
//         default:
//             printf("INVALID");
//     }
// }