//TO REVERSE A NO 

// #include <stdio.h>
// int main(){
// int rev,num;
// printf("enter a number:");
// scanf("%d",&num);

// while(num>0){
//     rev= num % 10 ;
//     printf("%d",rev);
//     num = num/10;
// }
// return 0;
// }

//to find if no is armstrong or not 

// #include <stdio.h>
// int main() {
//     int r,n,c,arm=0;
    
//     printf("enter your number:");
//     scanf("%d",&n);

//     c=n;

//     while(n>0) {
//         r = n%10;
//         arm=(r*r*r)+arm ;
//         n= n/10;
//     }
//     if(c==arm){
//         printf("it is armstrong no");
//     }
//     else{
//         printf("it is not an armstrong no");
//     }
//     return 0;
// } 

//to count prime no 
#include <stdio.h>
int main() {
    int i,j,count,primecount=0;

    for(i=1 ; i<20 ; i++){
        count = 0;

        for(j=1 ; j<=i ; j++){
            if(i%j==0){
            count++;
            }
        }
        if(count==2) {
            printf("%d \t",i);
        }
    }
    return 0;
}