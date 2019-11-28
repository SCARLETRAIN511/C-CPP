#include <stdio.h>

int main() {
    int x=1;
    int *p=&x;
    *p=5;
    printf("The number of *p is %d\n",*p);
    printf("the number of x is %d\n",x);
    return 0;
}