#include <stdio.h>
void swap(int a, int b){
    int i=b;
    b=a;
    a=i;

}

int main(void){
    int a=5;
    int b=9;
    swap(a,b);
    printf("A=%d, B=%d\n",a,b);
    return 0;    
}