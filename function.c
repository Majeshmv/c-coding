#include<stdio.h>
int sum(int , int );
int sub(int , int );
int mult(int , int );

int main(){
    int a,b,s;
    printf("Enter the two numbers : ");
    
    scanf("%d %d", &a, &b);
    s = sum();
    printf("addition of two numbers : %d",s);
    s = sub(a,b);
    printf("substraction of two numbers : %d",s);
    s = mult(a,b);
    printf("multiplication of two numbers : %d",s);
    return 0;
}
int sum(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}
int sub(int a, int b){
    int sub;
    sub = a-b;
    return sub;
}
int mult(int a, int b){
    int mult;
    mult = a*b;
    return mult;
}