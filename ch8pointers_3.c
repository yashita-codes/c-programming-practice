// #include <stdio.h>
// void square(int n);
// void _sqaure(int *n);

// int main() {
//     int number=4;
//     square(number);
//     printf("number = %d \n",number);

//     _square(&number);

//     return 0;
// }
// void square(int n) {
//     n=n*n;
//     printf("square = %d \n",n);
// }
// void _square(int *n) {
//     *n= (*n) * (*n);
//     printf("square = %d \n",*n);
// }
#include <stdio.h>
void maximum(int *a, int *b,int *max) {
    if(*a > *b) {
        *max=*a;
    }
    else {
        *max=*b;
    }
}

int main() {
    int a,b,max;
    printf("enter two no:");
    scanf("%d %d", &a , &b);

    maximum(&a,&b,&max);
    printf(" maximum no is : %d",max);
    return 0;
}


// //call by value
// #include <stdio.h>
// void swap(int a,int b);

// int main(){
//     int a=5, b=8;
//     swap(a,b);
//     return ;
// }

// void swap(int a,int b){
// int t;
// t=a;
// a=b;
// b=t;
// printf("a value after swapping is : %d \n",a);
// printf("b value after swapping is : %d \n",b);
// return 0;
// }

//call  by reference 

#include <stdio.h>
void swap(int *a,int  *b); // swap function has two pointers passed 

int main() {
    int x=6 ,y=8;  // new valriable passed 
    swap(&x,&y);   // swap passes address of x and y . *a stores addresss of x and *b stores that of y
    return ;
}
void swap(int *a,int *b){
int *t;
*t=*a;
*a=*b;
*b=*t;
printf("a value after swapping is : %d \n",*a);
printf("b value after swapping is : %d \n",*b);
return 0;
}


