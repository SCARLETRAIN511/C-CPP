#include <stdio.h>
int main(){
    int array1[10];
    int a;
    for ( int i = 0; i < 10; i++)
    {
        printf("input the number:");
        scanf("%d",&a);
        array1[i]=a;

    }
    int x=array1[2];
    printf("the number is %d",x);


    

    return 0;
}