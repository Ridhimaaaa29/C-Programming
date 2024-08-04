// #include<stdio.h>
// int main() {
//     int day; //1-mon; 2-tues; 3-wed
//     printf("enter day(1-7) : ");
//     scanf("%d", &day);
//     switch (day) {
//         case 1 : printf("monday");
//         break;
//         case 2 : printf("tuesday");
//         break;
//         case 3 : printf("wednesday");
//         break;
//         case 4 : printf("thurday");
//         break;
//         case 5: printf("friday");
//         break;
//         case 6 : printf("saturday");
//         break;
//         case 7 : printf("sunday");
//         break;
//         default : printf("not a valid day");
//     }
//     return 0;
// }

//using characters


#include<stdio.h>
int main() {
    char day; //m-mon; t-tues; w-wed
    printf("enter day(m-s) : ");
    scanf("%s", &day);
    switch (day) {
        case 'm' : printf("monday");
        break;
        case 't' : printf("tuesday");
        break;
        case 'w' : printf("wednesday");
        break;
        case 'T' : printf("thurday");
        break;
        case 'f': printf("friday");
        break;
        case 's' : printf("saturday");
        break;
        case 'S' : printf("sunday");
        break;
        default : printf("not a valid day");
    }
    return 0;
}