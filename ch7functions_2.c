#include <stdio.h>
#include <conio.h>
void add();
void sub();
void multi();


int main() {
    add();
    sub();
    getch();
    return 0;
}

void add() {
    int n1, n2, sum;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    sum = n1 + n2;

    printf("Sum = %d \n", sum);
}

void sub() {
    int n1, n2, subs;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    subs= n1 - n2;

    printf("Subtract= %d", subs);
}
