// // Q1. Write a program to check if a number is divisible by 2 or not.
// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter your number: ");
//     scanf("%d",&a);
//     printf("%d", a % 2 == 0);
//     return 0;
// }


// // Q2. write a program to check if print 1(true) or 0(false) for the following statemens
// a. if it's sunday & it's snowing -> true
// b. if it's monday or it's raining -> true
// c. if number is greater than 9 & less than 100 -> true

//a.
// int main(){
//     int isSunday = 0;
//     int isSnowing = 1;
//     printf("%d \n", isSunday && isSnowing);
// //     return 0;
// // }


// // b.
// // #include <stdio.h>
// // int main(){
// //     int isMonday = 0;
// //     int isRaining = 1;
// //     printf("%d \n", isMonday || isRaining);
// //     return 0;
// // }


// //c.
// #include <stdio.h>
// int main(){
//     int x;
//     printf("enter your number: ");
//     scanf("%d",&x );
//     printf("%d\n", x>9 && x<100);
//     return 0; 
// }


// //Q3. write a program to print the average of 3 numbes.
// #include <stdio.h>
// int main(){
//     int a, b, c;
//     printf("enter the value of a: ");
//     scanf("%d", &a);
//     printf("enter the value of b: ");
//     scanf("%d", &b);
//     printf("enter the value of c: ");
//     scanf("%d", &c);
//     printf("Average: %d\n",(a+b+c)/3);
//     return 0;
// }


// //Q4. Write a program to check if given character is digit or not.
// #include <stdio.h>
// #include <ctype.h>
// int main(){
//     char character;
//     printf("Enter a character: ");
//     scanf("%c",&character);
//     printf("%c is %s a digit.\n",character,(isdigit(character)) ? "":"not");
//     return 0;
// } 


// //Q5. write a program to print the samllest number.
// #include <stdio.h>

// int main() {
//     int num1, num2, num3, smallest;
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
//     printf("Enter the third number: ");
//     scanf("%d", &num3);
//     smallest = num1;
//     smallest = (num2 < smallest) ? num2 : smallest;
//     smallest = (num3 < smallest) ? num3 : smallest;
//     printf("The smallest number is: %d\n", smallest);

//     return 0;
// }


// // Q6. C program to perform all arithmetic operation
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int num1, num2;
//     int sum, sub, mult, mod;
//     printf("First number:" );
//     scanf("%d", &num1);
//     printf("Second number: ");
//     scanf("%d", &num2);
//     printf("SUM = %d\n", num1 + num2);
//     printf("DIFFRENCE = %d\n", num1-num2);
//     printf("PRODUCT = %d\n", num1 * num2);
//     float div = (float) num1 / num2;
//     printf("QUOTIENT = %f\n", div);
//     printf("MODULUS %d\n", num1 % num2);
//     double power = pow(num1,num2); 
//     printf("POWER = %.0f\n", power);
//     return 0;
// }


// //Q7. C program to find perimeter of a rectangle
// #include <stdio.h>
// int main(){
//     float length, Width, perimeter;
//     printf("Enter length: ");
//     scanf("%f", &length);
//     printf("Enter Width: ");
//     scanf("%f", &Width);
//     perimeter = 2*(length + Width);
//     printf("perimeter of rectangle = %.2f units ", perimeter);
//     return 0;
// }


// //Q8. C program to find area of a rectangle
// #include <stdio.h>
// int main(){
//     float length, width, area;
//     printf("Enter length: ");
//     scanf("%f",&length);
//     printf("Enter Width: ");
//     scanf("%f",&width);
//     area = length * width;
//     printf("Area of rectangle = %.2f sq. units",area);
//     return 0;
// }

// //Q9. C program to find diameter, circumference and area of circle
// #include <stdio.h>
// int main(){
//     float radius, diameter, circumfernce, area;
//     printf("Enter radius: ");
//     scanf("%f",&radius);
//     diameter = 2 * radius;
//     circumfernce = 2 * 3.14 * radius;
//     area = 3.14 * (radius * radius);
//     printf("Diameter of circle = %.2f units\n", diameter);
//     printf("Circumference of circle = %.2f units\n", circumfernce);
//     printf("Area of thr circle = %.2f sq. units", area);
//     return 0;
// }


// //Q10. C program to convert centimeter to meter and kilometer
// #include <stdio.h>
// int main(){
//     float cm, meter, km;
//     printf("Enter length in centimeter = ");
//     scanf("%f",&cm);
//     meter = cm / 100.0;
//     km = cm / 100000.0;
//     printf("Length in meter = %.2f m \n",meter);
//     printf("Length in Kilometer = %.2f km",km);
//     return 0;
// }


// //Q11. C program to convert temperature from degree celsius to fahrenheit
// #include <stdio.h>
// int main(){
//     float Celsius, Fahrenheit;
//     printf("Enter temperature in Celsius =");
//     scanf("%f",&Celsius);
//     Fahrenheit = (Celsius*9/5)+32;
//     printf("%.2f Celsius = %.2f Fahrenheit", Celsius, Fahrenheit);
//     return 0;
// }


// //Q12. C program to convert temperature from degree fahrenheit to celsius
// #include <stdio.h>
// int main(){
//     float Fahrenheit, Celsius;
//     printf("Temperature in fahrenheit = ");
//     scanf("%f",&Fahrenheit);
//     Celsius = (Fahrenheit - 32)* 5/9;
//     printf("%.2f fahrenheit = %.2f Celsius", Fahrenheit, Celsius);
//     return 0;
// }


// //Q13. C program to convert days to years weeks and days
// #include <stdio.h>
// int main(){
//     int days, weeks, years;
//     printf("Enter days: ");
//     scanf("%d",&days);
//     years = days / 365;
//     weeks = (days % 365) / 7;
//     days = days - ((years * 365)+(weeks*7));
//     printf("Years: %d\n",years);
//     printf("Weeks: %d\n",weeks);
//     printf("Days: %d",days);
//     return 0;
//}


// // Q14. C program to find power of a number using pow function
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double base, expo, power;
//     printf("Enter base: ");
//     scanf("%lf",&base);
//     printf("Enter exponent: ");
//     scanf("%lf",&expo);
//     power = pow(base, expo);
//     printf("%.2lf ^ %.2lf = %.2lf",base, expo, power);
//     return 0;
// }


// //Q15. C program to find square root of a number
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double num, root;
//     printf("Enter any number: ");
//     scanf("%lf",&num);
//     root = sqrt(num);
//     printf("Square root of %.2lf = %.2lf", num, root);
//     return 0;
// }


// //Q16. C program to find angles of triangle if two angles are given
// #include <stdio.h>
// int main(){
//     int a, b, c;
//     printf("Enter first angle: ");
//     scanf("%d",&a);
//     printf("Enter second angle: ");
//     scanf("%d",&b);
//     c = 180 - (a+b);
//     printf("Third angle = %d",c);
//     return 0;
// } 


// //Q17. C program to find area of a triangle
// #include <stdio.h>
// int main(){
//     float base, height, area;
//     printf("Enter base of the triangle: ");
//     scanf("%f",&base);
//     printf("Enter height of the triangle: ");
//     scanf("%f",&height);
//     area = (height*base)/2;
//     printf("Area of the traingle = %.2f sq. units",area);
//     return 0;
// }


// //Q18. C program to find area of an equilateral triangle
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double side, area;
//     printf("Enter side of the equilateral triangle: ");
//     scanf("%lf",&side);
//     area = (sqrt(3)/4)*(side*side);
//     printf("Area of equilateral triangle = %.2lf sq. units",area);
//     return 0;
// }


// //Q19. C program to calculate Simple Interest
// int main(){
//     double Principle_amount, time, rate, simple_interest;
//     printf("Enter principle Amount: ");
//     scanf("%f",&Principle_amount);
//     printf("Enter time: ");
//     scanf("%f",&time);
//     printf("Enter rate: ");
//     scanf("%f",&rate);
//     simple_interest = (Principle_amount*time*rate)/100;
//     printf("Simple Interest = %.f ",simple_interest);
//     return 0;
// }


// //Q20. C program to calculate total average and percentage of five subjects
// int main(){
//     double eng, phy, chem, math, comp;
//     double total,Average,Percentage;
//     printf("Enter your english marks: ");
//     scanf("%lf",&eng);
//     printf("Enter your Physics marks: ");
//     scanf("%lf",&phy);
//     printf("Enter your Chemstry marks: ");
//     scanf("%lf",&chem);
//     printf("Enter your Maths marks: ");
//     scanf("%lf",&math);
//     printf("Enter your Computer science marks: ");
//     scanf("%lf",&comp);
//     total = eng+phy+chem+math+comp;
//     Average = total/5.0;
//     Percentage = (total / 500.0)*100;

//     printf("Total marks = %.2f\n",total);
//     printf("Average marks = %.2f\n",Average);
//     printf("Percentage = %.2f out of 500",Percentage);
//     return 0;
// }


// //Q21. C program to calculate Compound Interest
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double principle, time, rate, CI;
//     printf("Enter principle Amount: ");
//     scanf("%lf",&principle);
//     printf("Enter time: ");
//     scanf("%lf",&time);
//     printf("Enter rate: ");
//     scanf("%lf",&rate);
//     CI = principle*(pow((1+rate/100),time));
//     printf("Compound Interset = %.2lf",CI);
//     return 0;
// }


// //Q22.C program to check Least Significant Bit (LSB) of a number is set or not
// int main(){
//     int num;                                                                                          
//     printf("Input number: ");
//     scanf("%d",&num);
//     if(num & 1)
//     printf("LSB of %d is set (1).",num);
//     else
//     printf("LSB of %d is unset (0).",num);
//     return 0;
// }


// //Q23. C program to check Most Significant Bit (MSB) of a number is set or not
// #include <stdio.h>
// #define BITS sizeof(int) * 8 
// int main(){
//     int num, msb;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     msb = 1 << (BITS - 1);
//     if(num & msb)
//     printf("MSB of %d is set (1).",num);
//     else
//     printf("MSB of %d is unset (0).",num);
//     return 0;
// }


// //Q24. C program to get nth bit of a number
// #include <stdio.h>
// int main(){
//     int num, n, bitStatus;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     printf("Enter nth bit to check (0-31): ");
//     scanf("%d",&n);
//     bitStatus = (num >> n) & 1;
//     printf("The %d bit is set to %d", n, bitStatus);
//     return 0;
// }


// //Q25. C program to find maximum between two numbers using conditional operator
// #include <stdio.h>
// int main(){
//     int num1, num2, num3, max;
//     printf("Input first number: ");
//     scanf("%d",&num1);
//     printf("Input second number: ");
//     scanf("%d",&num2);
//     printf("Input third number: ");
//     scanf("%d",&num3);

// /*    if (num1 > num2 && num1 > num3){
//         max = num1;
//     } else if (num2 >= num1 && num2 >= num3){
//         max = num2;
//     } else{
//         max = num3;
//     }
//     printf("Maximum number among %d, %d, and %d is: %d\n",num1, num2, num3, max);
//     return 0;
    
//     */
//     max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
//     printf("\n Maximum between %d, %d and %d = %d",num1, num2, num3, max);
//     return 0;
// }


// //Q26. Check if a number is positive, negative, or zero:
// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter a number ");
//     scanf("%d",&num);

//     if (num > 0) {
//         printf("The number is positive.\n");
//     } else if (num < 0) {
//         printf("The number is negative.\n");
//     } else {
//         printf("The number is zero.\n");
//     }
//     return 0;
// }


// //Q27. Detrermine a specific age is eligible for casting the vote
// int main(){
    
// }

// #include <stdio.h>
// int sumofNNum(int n){
//     int sum = 0;
//     for (int i = 1; i <=n;i++){
//         sum += i;
//     }
//     return sum;
// }
// int main (){
//     int ans = sumofNNum(5);
//     printf("%d",ans);
// }

// Q.28 find the power
// #include <stdio.h>
// int Power(int x,int y){
//     int res = 1;
//     for (int i = 1; i <= y; i++){
//         res = res * x;
//     }
//     return res;
// }
// int main(){
//     int ans = Power(2, 5);
//     printf("%d",ans);
// }

// #include <stdio.h>
// void isPrime(int n){
//     int cnt = 0;
//     for (int i = 1; i <= n; i++){
//         if(n % i ==0){
//          cnt++;
//         }
//     }
//     if(cnt == 2){
//         printf("Prime");
//     }
//     else {
//         printf("Not Prime");
//     }
// }


// // Q.29 write a program to find id a character entered by user is upper case or not.
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("enter charcater: ");
//     scanf("%c", &ch);
//     if (ch >= 'A' && ch <= 'Z'){
//         printf("upper case\n");
//     } else if (ch >= 'a' && ch <= 'z'){
//         printf("Lower case\n");
//     } else{
//         printf("Not english letter");
//     }
//     return 0;
// }

