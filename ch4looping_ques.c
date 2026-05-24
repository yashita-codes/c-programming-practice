//PRINT ODD NUMBERS BETWEEN 1 TO 20 USING CONTINUE 
// #include <stdio.h>
// int main(){
//     int i;
//     for(i=1 ; i<=20 ; i++){
//         if(i%2==0){
//             continue;
//         }
//         printf("%d \n",i);
//     }
//     return 0;
// }

//PRINT ODD NUMBERS BETWEEN 1 TO 20 WITHOUT USING CONTINUE 
#include <stdio.h>
int main() {
    int i;
    for(i=1 ; i<=20 ; i++){
        if(i%2!=0){
            printf("%d \n",i);
        }
    }
    return 0;
}