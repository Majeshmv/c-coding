#include<stdio.h>
int main(){
    int i,num,fact=1;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        fact=fact*i;
    printf("factorial of the number :%d",fact,num);
    return 0;
}