//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>
int main(){ 


    int a,b,sum;
    printf("enter value of a=");
    scanf("%d",&a);
    printf("enter value of b=");
    scanf("%d",&b);
    sum=a+b;
    printf("sum of a and b=%d",sum);
    return 0;

}