#include<stdio.h>

 int main(){
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if (age >= 14, age<=70){
        printf("You are allowed \n");

    }
    else {
        printf("You are not allowed \n");
    }

    return 0;
}