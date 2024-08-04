#include<stdio.h>
int main(){
    printf("%d\n", 2*2);
    printf("%f\n", 2.0*2);
    printf("%f\n", 2.0*2.0);


    //special cases

    printf("%d\n", 2/3);
    printf("%f\n", 2.0/3);
    printf("%f\n", 3.0/2);
    printf("%d\n",3/2);

    //explicit conversion

    int a = (int) 1.999999;
    printf("%d", a);
    return 0;
}
