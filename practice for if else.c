#include<stdio.h>

int main(){
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if(age>=16)
    {
    printf("Allowed to the park \n");
    }
    else{
        printf("Below age chidren not allowed \n");
    }

        return 0;
}