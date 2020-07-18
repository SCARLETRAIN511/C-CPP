#include <stdio.h>
#define M 10

void main(){
    int x, add;
    printf("Type the value of x: ");
    //使用变量的地址
    scanf("%d",&x); //pointer
    add = x + M;
    int a = 3;
    printf("add = %d\n",add);

    int k = 2;
    float b = 5.2,c;
    c = k+b;
    printf("The sum is %3.6f\n",c);

    int s=3,absa;
    absa = (s>0?s:-s); //this is actually if condition a>0 absa = a, vice versa
    printf("absa is %d\n",absa);

    int num1,num2;
    printf("Type 2 numbers here");
    scanf("%d %d",&num1,&num2);
    printf("%d,%d",num1,num2);

}