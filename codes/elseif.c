#include<stdio.h>

int main() {
    int age;
    printf("enter a number : ");
    scanf("%d", &age);

    if(age>18){
    printf("adult\n");
    printf("they can vote\n");
    printf("they can drive\n");
}
    else if(age > 13 && age < 18){
        printf("teenage\n");
    }
    else{
        printf("child\n");
    }
    printf("thankyou");
    return 0;
}