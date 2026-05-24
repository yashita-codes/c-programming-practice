// #include <stdio.h>
// int main() {
//     int arr[10],i,num,found=0;

// for(i=0;i<10;i++){
//     printf("enter 10 numbers :" );
//     printf("\n");
//     scanf("%d",&arr[i]);
// }

// printf("enter :");
// scanf("%d",&num);

// for(i=0;i<10;i++){
//     if(arr[i]==num){
//         found=1;
//         break;
//     }
// }
// if(found==1){
//     printf("no found position %d",i+1);
// }
// else {
//     printf("not found");
// }
// return 0;
// }

#include <stdio.h>
void array(int *arr);

int main() {
    int arr[10];
    printf("enter 10 no : \n");
    array(arr);
    return 0;
    
}
void array(int *arr){
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        printf("%d \n",arr[i]);
    }
    
}