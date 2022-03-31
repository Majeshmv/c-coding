#include <stdio.h>

#define PI 3.14
float area( float );
float circum( float );

int main(){
    float r,ar;
    printf("Enter the value of r:\n");
    scanf("%f", &r);
    ar=area(r);
    printf("The area of the circle is: %f\n",ar);
    printf("The circumferance of circle is: %f",circum(r));
    return 0;
}
float area(float r){
    // float ar;
    // ar = PI*r*r;
    return  PI*r*r;
}
float circum(float r){
    // float circu;
    // circu =;
    return  2*PI*r;
}