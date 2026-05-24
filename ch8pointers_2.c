// prog to find max no between two 

//call by value 
#include <stdio.h>
int findmax(int a,int b){
    if(a>b)
      return a;
    else
      return b;
}
int main() {
    int a=7,b=10,max;
    

    max= findmax(a,b);
    printf("maximum no is :%d \n",max);
    return 0;
}


// #include <stdio.h>
// void findmax(int *a,int *b,int *max){
//     if(*a>*b)
//       *max=*a;
// //     else
//       *max=*b;
// }
// int main() {
//     int x=8,y=4,max;
//     findmax(&x,&y,&max);
//     printf("maximum no is :%d \n",max);
//     return 0;
// }

   