// #include <stdio.h>
// void namaste();
// void bonjour();
// int main() {
//     printf("enter i for Indian & f for French :");
//     char ch;
//     scanf("%c",&ch);

//     if (ch =='i'){
//         namaste();
//     }
//     else {
//         bonjour();
//     }
//     return 0 ;
// }
// void namaste () {
//     printf("Namaste \n");
// } 
// void bonjour() {
//     printf("bonjour");
// }
//.................................................................

// #include <stdio.h>
// #include <conio.h>
// void add();
// void sub();
// void multi();


// int main() {
//     add();
//     sub();
//     getch();
//     return 0;
// }

// void add() {
//     int n1, n2, sum;

//     printf("Enter first number: ");
//     scanf("%d", &n1);

//     printf("Enter second number: ");
//     scanf("%d", &n2);

//     sum = n1 + n2;

//     printf("Sum = %d", sum);
// }

// void sub() {
//     int n1, n2, subs;

//     printf("Enter first number: ");
//     scanf("%d", &n1);

//     printf("Enter second number: ");
//     scanf("%d", &n2);

//     subs= n1 - n2;

//     printf("Subtract= %d", subs);
// }

//...............................................
#include <stdio.h>
int main() {
    int n1,n2,a;
    int add (int , int);
    printf("enter n1:");
    scanf("%d",&n1);

    printf("enter n2:");
    scanf("%d",&n2);

    a= add(n1,n2);
    printf("%d",a);
    getch();
}

int add(int x,int y)
{
    int sum;
    sum=x+y;
    return(sum);
}

