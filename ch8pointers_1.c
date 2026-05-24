#include <stdio.h>
int main() {
    int *ptr ;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("%d \n",x);
    printf("%d",*ptr);


    *ptr += 5;
    printf("%d \n",x);
    printf("%d",*ptr);

    return 0 ;
}

#include <stdio.h>
int main() {
float price = 100.00;
float *ptr = &price ;
float **pptr = &ptr;

printf("%d \n", ptr);   //address of price
printf("%f \n", *ptr);  //value at address ptr
printf("%d \n", pptr);   //address of ptr
printf("%d \n", *pptr);   //value 

return 0;
}

void printHello() {
    printf("hello");
}
