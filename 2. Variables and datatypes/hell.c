#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>0){
        printf("The Entered number is positive");
    }
    else if(num == 0){
        printf("The Entered number is 0");
    }
    else{
        printf("The Entered number is negative");
    }
    return 0;
}
