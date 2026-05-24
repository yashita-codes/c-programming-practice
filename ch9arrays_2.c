// #include <stdio.h>

// int max(int *arr);

// int main() {
//     int arr[10];

//     printf("Enter 10 numbers:\n");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &arr[i]);
//     }

//     int m = max(arr);   // function call

//     printf("Maximum element = %d", m);

//     return 0;
// }

// int max(int *arr){
//     int max = arr[0];   // assume first element is largest

//     for(int i = 1; i < 10; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }

//     return max;
// }


// ----------call by value & it doesn't reverse original array
// #include <stdio.h>
// void reverse(int *arr);

// int main(){
//     int arr[10];
//     printf("enter 10 no:");
//     for(int i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     reverse(arr);
// }
// void reverse(int *arr) {
//     for(int i=9;i>=0;i--){
//         printf("%d \n",arr[i]);
// }
// }

// #include <stdio.h>

// int sum(int arr[]);

// int main() {
//     int arr[5];

//     printf("Enter 5 numbers:\n");

//     // input
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }

//     // function call
//     int s = sum(arr);

//     printf("Sum = %d", s);

//     return 0;
// }

// // function to calculate sum
// int sum(int arr[]){
//     int total = 0;

//     for(int i=0;i<5;i++){
//         total = total + arr[i];
//     }

//     return total;
// }

// =============call by reference------------

// #include <stdio.h>
// void reverse(int *arr);
// int main() {
//     int arr[10];
//     printf("enter 10 no:");
//     for(int i=0;i<10;i++){
//     scanf("%d",&arr[i]);
//     }
//     reverse(arr);
//     printf("reversed array :\n");
//     for(int i=0;i<10;i++){
//         printf("%d \n",arr[i]);
//     }
//     return 0;
// }
// void reverse(int *arr){
//     int start=0;
//     int end=9;
//     int temp;
//     while(start<end){
//         temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
        
//         start++;
//         end--;
//     }
// }

