#include<stdio.h>
 int a,b;
// int swap( int *, int *);
int swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; 
    // printf("The value of a,b:%d %d ",a,b);
    // return a,b;
}
int main(){
   
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a,&b);
    // a,b=swap(a,b)
    printf("The value of a after swaping:%d ",a);
    printf("The value of b after swaping:%d",b);
    return 0;
}
