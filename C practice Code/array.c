// #include <stdio.h>
// int main(){
//     int arr [] = {2, 5, 8};
//     int n = sizeof(arr)/ sizeof(int);

//     for (int i = 0; i<n; i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// void swap(int*a, int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int num1 = 10, num2 = 20;
//     printf("Before swapping: num1 = %d, num2 = %d\n",num1, num2);
//     swap(&num1, &num2);
//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
//     return 0;
// }
// int main(){
//     int *ptr;
//     float *fptr;
//     char *cptr;
//     printf("%d%d%d",sizeof(ptr), sizeof(fptr), sizeof(cptr));
// }


// #include <stdio.h>
// int n;
// scanf("%d", &n);
// int arr[n];
// for(int i = 0; i<n; i++){
//     scanf("%d", &arr[i]);
// }
// for (int i = 0; i<n; i++){
//     printf("%d",arr[i])
// }

// int minVlaue = arr[0];
// for (int i = 1; i<n;i++){
//     if (arr[i]<minVlaue){
//         minVlaue = arr[i];
//     }
// }
// //Q1. write a code to find the max element in our array
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
    
//     for (int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     int maxValue = arr[0];
//     for(int i = 1; i < n; i++){
//         if(arr[i] > maxValue){
//             maxValue = arr[i];
//         }
//     }
    
//     printf("%d", maxValue);
    
//     return 0;
// }

// //Q2. sum of all element in the array
// #include<stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
    
//     for (int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int addValue = 0;
//     for(int i = 0; i < n; i++){
//             addValue += arr[i];
//         }
//     printf("%d", addValue);
    
//     return 0;
// }

// //Q3. find the sizeof the integer array
// #include <stdio.h>
// int main(){
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(int);
//     for (int i = 0; i < n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }
// //Q4. find the sizeof the float array

// #include <stdio.h>
// int main(){
//     int arr[] = {1.4, 2.3, 3.2, 4.6};
//     int n = sizeof(arr) / sizeof(float);
//     for (int i = 0; i < n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

// //Q5. find the sizeof the char array
// #include <stdio.h>
// int main(){
//     int arr[] = {'a','b','c','d','e'};
//     int n = sizeof(arr) / sizeof(int);
//     for (int i = 0; i < n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>
void swapArr (int arr[],int n){
    int si = 0;
    int ei = n - 1;
    while(si < ei){
        int temp = arr[si];
        arr[si] = arr [ei];
        arr[ei] = temp;

        si++;
        ei--;
    }
}
// int main(){
//     int arr[] = {1, 2, 3};
//     int n = sizeof(arr) / sizeof(int);
//     for (int i = 0; i < n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }