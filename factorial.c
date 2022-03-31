#include<stdio.h>
int main(){
    int i,num1,fact=1;
    printf("Enter the number :");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++)
        fact=fact*i;
    printf("factorial of the number :%d %d",fact,num1);
    return 0;
}