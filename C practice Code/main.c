#include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num % 2 == 0) {
//         printf("%d is even.\n", num);
//     } else {
//         printf("%d is odd.\n", num);
//     }
//     return 0;
// }
// int main(){
//        int i = 1;
//    while (i <= 4){
//     printf("%d", i*2);
//     if(i == 3) {
//         continue;
//         }
//         printf("%d",i*3);
//         i++;
//         }
//     }

// #include <stdio.h>
// int main() {
// int n = 10;
// int sum_even = 0;
// int product_odd = 1;
// for (int i = 1; i <= n; i++) {
//     if (i % 2 == 0) {
//         sum_even += i;
//         } else {
//             product_odd *= i;
//             }
//         }
//         printf("Sum of even numbers: %d\n", sum_even);
//         printf("Product of odd numbers: %d\n", product_odd);
//         return 0;
//         }
#include <stdio.h>
int main(){
int a, b;
scanf("%d %d",&a, &b);
if (a != 0 && b !=0){
    printf("true");
}else{
    printf("false");
}
    return 0;
}
