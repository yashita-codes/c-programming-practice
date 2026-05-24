#include <stdio.h>
int main(){
    int day;
    printf("enter no between 1 to 7:");
    scanf("%d",&day);
    
    switch(day){
        case 1:
        printf("It is sunday");
        break;

        case 2:
        printf("It is monday");
        break;

        case 3:
        printf("It is tuesday");
        break;

        case 4:
        printf("It is wednesday");
        break;

        case 5:
        printf("It is thursday");
        break;

        case 6:
        printf("It is friday");
        break;

        case 7:
        printf("It is saturday");
        break;
        
        default:
        printf("It's an error");
    }
}