//check if a number is positive or negative and also check whether its even or odd

// #include<stdio.h>
// int main() {
//     int number;
//     printf("enter a number : ");
//     scanf("%d", &number);
//     if (number > 0) {
//         printf("number is positive\n");
//         if(number % 2 == 0) {
//             printf("even\n");
//         } else {
//             printf("odd\n");
//         }
//     }
//     else{
//         printf("negative\n");
//     }
//     return 0;
// }


//write a program to chk if a student passed or failed
//marks > 30 is pass
//marks < 30 is fail

// #include<stdio.h>
// int main() {
//     int marks;
//     printf("enter marks(0-100) : ");
//     scanf("%d", &marks);
//     if(marks>30){
//         printf("pass");
//     } else{
//         printf("fail");
//     }
//     return 0;
// }


/*wap to give grades to a student
marks < 30 is C
30 <= marks < 70 is B
70 <= marks <90 is A
90<= marks <= 100 is A+*/

//  #include<stdio.h>
//  int main() {
//      int marks ;
//      printf("enter number(0-100) : ");
//      scanf("%d", &marks);
//      if(30 <= marks && marks < 70){
//         printf("Grade is B\n");
//      }
//      else if (70 <= marks && marks<90){
//         printf("Grade is A\n");
//      }
//      else if(90<= marks && marks <= 100) {
//         printf("Grade is A+\n");
//      } else{
//         printf("fail");
//      }
//      return 0;
//  }


// #include<stdio.h>
// int main() {
//     int x = 2;
//     if (x=1){
//         printf("x is equal to 1");
//      } else {
//         printf("x is not equal to 1");
//      }
// }


//WAP to find if a character  entered by user is upper case or not

// #include<stdio.h>
// int main() {
// char ch;
// printf("enter character : ");
// scanf("%c", &ch);
// if (ch>='A' && ch<='Z') {
//     printf("upper case");
// }
// else if (ch>='a' && ch<='z') {
//     printf("lower case");
// } else {
//     printf("not english letter");
// }
// }



/*Write a program to check if the given number is a
natural number.*/

// #include <stdio.h>
// #include<math.h>

// int main() {
//     int a;
//     scanf("%d", &a);

//     if (a>=1 ) {
//         printf("The given number is a Natural Number\n");
//     }
//     else{
//         printf("The given number is not a Natural Number\n");
//     }
//     return 0;
// }