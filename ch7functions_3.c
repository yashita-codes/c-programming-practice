#include <stdio.h>
#include <math.h>

int  square(int a,int b);

int main() {
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    
    square(a,b);
    printf("square :%d",square);
    return ;
}
    int square(int a,int b) {
        int power = pow(a,b);
        return 0;
    }
    

//#include <stdio.h>
// void calculateprice(float value);

// int main() {
//     float value = 100.0;
//     calculateprice(value);
//     printf("value original is : %f \n" , value);
//     return 0;
// }
// void calculateprice(float value) {
//     value = value + (0.18*value);
//     printf("final price is : % f\n",value);
// }
// #include <math.h>
// int main() {
//     int n=4;
//     printf("%f",pow(n,2));
//     return 0;
// }
    
