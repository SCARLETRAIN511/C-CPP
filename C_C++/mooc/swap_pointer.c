#include <stdio.h>
void swap(int *pa,int *pb);

int main(void){
    int a=5;
    int b=6;
    printf("a is %d, b is %d\n",a,b);
    swap(&a,&b);
    printf("a is %d, b is %d\n",a,b);
    return 0;
}

void swap(int *pa,int *pb){
    int t=*pa;
    *pa=*pb;
    *pb=t;

}