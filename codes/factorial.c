// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d", &n);
//     int fact = 1;
//     for(int i=1;i<=n;i++) {
//         fact=fact*i;
//     }
//     printf("final factorial is %d", fact);
//     return 0;
// }


// #include<stdio.h>
// int fact(int n);
// int main(){
//     int n;
//     printf("factorial is : %d",fact(4));
//     return 0;
// }
// int fact(int n) {
//     if(n==1) {
//         return 1;
//     }
//     int factNm1 =fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }