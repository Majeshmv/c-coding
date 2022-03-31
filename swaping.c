#include<stdio.h>
 int a,b;
int swap( int , int );
int main(){
   
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    swap(a,b);
    // a,b= swap(a,b);
    printf("The value of a after swaping:%d \n",a);
    printf("The value of b after swaping:%d",b);
    return 0;
}
int swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp; 
    printf("The value of a,b in fn:%d %d \n",a,b);
    // return a,b;
}