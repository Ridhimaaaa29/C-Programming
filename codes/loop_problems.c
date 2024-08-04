// Print the sum of first n natural numbers. Also print reverse.

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter number : ");
//     scanf("%d\n", &n);
//     int sum = 0;
//     for(int j=n; j>=1; j--){
//         sum = sum+ j;
//         printf("%d\n", j);
//     }
//     printf("sum of n natural numbers : %d\n", sum);
//     return 0;
// }


//Print a table of numbers input by the user.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n : ");
//     scanf("%d\n", &n);
//     for(int i= 1;i<=10;i++) {
//         printf("%d\n", n*i);
//     }
//     return 0;
// }

//reverse of table

#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d\n", &n);
    for(int i=10;i>=1;i--) {
        printf("%d\n", n*i);
    }
    return 0;
}