//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>
int main(){
    int t;
    printf("enter the seconds: ");
    scanf("%d",&t);

    int h,s,m;
    h=t/3600;
    s=t%60;
    m=((t%3600-s))/60;
     printf("%d:",h);
     printf("%d:",m);
     printf("%d",s);
     return 0;
}
