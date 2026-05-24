//TO CHECK IF ENTERED AGE IS ELIGIBLE TO VOTE OR NOT 

// #include <stdio.h>
// int main(){
//     int age;
//     printf("enter your age:");
//     scanf("%d",&age);

//     if(age <18){
//         printf("not eligible to vote");    
//     }
//     else{
//         printf("eligible to vote ");
//     }
// }


//PROGRAM TO CHECK IF STUDENT PASSED OR FAILED BU IT'S PERCENTAGE 

// #include <stdio.h>
// int main() {
//     int per;
//     printf("enter percentage :");
//     scanf("%d",&per);

//     if(per>=90){
//         printf("Grade A");
//     }
//     else if(per>=80){
//         printf("Grade B");
//     }
//     else if(per>=70){
//         printf("Grade C");
//     }
//     else if(per>=60){
//         printf("Grade D");
//     }
//     else if(per>=50){
//         printf("Grade E");
//     }
//     else {
//         printf("Fail");
//     }
//     return 0;
// }

//Program to check if a number is prime or not 
#include <stdio.h>
int main() {
int num;
printf("enter number:");
scanf("%d",&num);
if(num%2==0){
    printf("is a prime no");
}
else{
    printf("not prime");
}
}




