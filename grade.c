#include<stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,e,s;
    char grade;
    float percentage=0.0;
    printf("Enter the value of a :");
    scanf("%d", &a);
    if(a>100){
        printf("Re enter the value of a :");
       scanf("%d", &a);
    }
    printf("Enter the value of b :");
    scanf("%d", &b);
    if(b>100){
        printf("Re enter the value of b :");
        scanf("%d", &b);
    }
    printf("Enter the value of c :");
    scanf("%d", &c);
    if(c>100){
        printf("Re enter the value of c :");
        scanf("%d", &c);
    }
    printf("Enter the value of d :");
    scanf("%d", &d);
    if(d>100){
        printf("Re enter the value of d :");
        scanf("%d", &d);
    }
    printf("Enter the value of e :");
    scanf("%d", &e);
    if(e>100){
        printf("Re enter the value of e :");
        scanf("%d", &e);
    }
    // s=sum(a,b,c,d,e);
    s=a+b+c+d+e;
    printf("addition of 5 numbers :%d\n",s);
    // percentage(sum);
    // printf("%f",(float)(s*100)/500);
    percentage=(float)(s*100)/500;

    printf("\npercentage of marks:%f",percentage);
    int p= round( percentage);
    printf("\nvalue of p:%d\n",p);
    if(p<=49){
        grade='F';
    }
    else if(p<=59){
        grade='D';
    }
    else if(p<=69){
        grade='C';
    }
    else if(p<=79){
          grade='B';
    }
    else if(p<=89){
          grade='A';
    }
    // else if(p<=100){
    //       grade='A+';
    // }
   
    // switch(p/10){
    // //     case 6:
    // //     printf("Fail");
    // //    break;
    //     case 6:
    //     printf("D grade");
    //     break;
    //     case 7:
    //     printf("C grade");
    //     break;
    //     case 8:
    //     printf("B grade");
    //     break;
    //     case 9:
    //     printf("A grade");
    //     break;
    //     case 10:
    //     printf("A+");
    //     break;
    //     default:
    //     printf("Fail");
    //     break;
    // }
     switch(grade){
        case 'F':
        printf("Fail");
        break;
        case 'D':
        printf("D grade");
        break;
        case 'C':
        printf("C grade");
        break;
        case 'B':
        printf("B grade");
        break;
        case 'A':
        printf("A grade");
        break;
        // case A+:
        // printf("A+");
        // break;
        default:
        printf("A+");
        break;
    }
    
    return 0;
}