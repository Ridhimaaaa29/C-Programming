// #include<stdio.h>
// int main(){
//     int i = 1;
//     while (i<=5){
//         printf("hello world!\n");
//         i++;
//     }
//     return 0;
    // }

#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
    return 0;
} 