//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
int main(){
   int a,b,x;
   printf("value of a and b=");
   scanf("%d%d",&a,&b);
   printf("value of a=%d",a);
   printf("value of b=%d\n",b);
   x=a;
   a=b;
   b=x;
   printf("now a is=%d\n",a);
   printf("now b is=%d\n",b);
   return 0;


   
}