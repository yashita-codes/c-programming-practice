//PROG TO write a function to count th eno of odd numbers in an array

// #include <stdio.h>

// int countodd(int arr[], int n);   //n is the size of array

// int main() {
//     int arr[]={1,2,3,4,5,6};
//     printf("%d",countodd(arr,6));
//     return 0;
// }

// int countodd(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2 !=0){
//             count++;
//         }
//     }
//     return count;
// }


// #include <stdio.h>
// int countodd(int arr[],int n);

//----------------TO REVERSE AN ARRAY--------------

// #include <stdio.h>
// void reverse(int arr[] , int n);
// void printarray(int arr[],int n);

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     printf("Original: ");
//     printarray(arr, n);
//     reverse(arr,n);
//     printf("Reversed:  "); 
//     printarray(arr, n);
    
//     return 0;

// }

// void reverse(int arr[],int n){
//     for(int i=0 ; i<n/2 ; i++){
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
// }
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d  ",arr[i]);
//     }
// }


// -----write a program to store first n fibonacci numbers-------

#include <stdio.h>

void fib(int n);

int main() {
    int n;
    printf("Enter value of n (n > 2): ");
    scanf("%d", &n);

    fib(n);
    return 0;
}

void fib(int n) {
    int f[10];

    f[0] = 0;
    f[1] = 1;

    printf("%d\t%d\t", f[0], f[1]);

    for(int i = 2; i < n; i++) {
        f[i] = f[i-1] + f[i-2];
        printf("%d ", f[i]);
    }
}
