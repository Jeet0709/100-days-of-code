//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main(){
    float a,b,sum,diff,product,quotient;
    printf("enter a and b=");
    scanf("%f%f",&a,&b);
    sum=a+b;
    product=a*b;
    diff=a-b;
    quotient=a/b;
    printf("sum=%.2f\n",sum);
    printf("diff=%.2f\n",diff);
    printf("product=%.2f\n",product);
    printf("quotient=%.2f\n",quotient);
    return 0;
}