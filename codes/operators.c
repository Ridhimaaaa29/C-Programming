#include<stdio.h>
int main(){
    //relational operator
    printf("%d\n", 4==3);
    printf("%d\n%d\n%d\n", 2==2, 5>3, 7!=6);


    //logical operator
    printf("%d\n", (4>3)&&(5>2));
    printf("%d\n", (4>3)&&(5>9));
    return 0;
}