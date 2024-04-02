// #include <stdio.h>
// int main(){
//     int days, weeks, years;
//     printf("Enter days: ");
//     scanf("%d",&days);
//     years = days / 365;
//     weeks = (days - (years * 365))/7;
//     printf("Years: %d\n",years);
//     printf("Weeks: %d\n",weeks);
//     printf("Days: %d",days);
//     return 0;
// }
// //Q14. C program to find power of a number using pow function
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double base, expo, power;
//     printf("Enter base: ");
//     scanf("%lf",&base);
//     printf("Enter Exponent: ");
//     scanf("%lf",&expo);
//     power = pow(base,expo);
//     printf("%.2lf ^ %.2lf = %.2lf",base, expo, power);
//     return 0;
// }

//Q15. C program to find square root of a number
#include <stdio.h>
#include <math.h>
int main(){
    double num, root;
    printf("enter any number: ");
    scanf("%lf",&num);
    root = sqrt(num);
    printf("Square root of %.2lf = %.2lf",num, root);
    return 0;
}