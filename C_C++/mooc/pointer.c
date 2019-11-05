#include <stdio.h>
void f(int *p);

int main(){
    int i =6;
    printf("&i=%p\n",&i);//with &
    f(&i);
    return 0;
}

void f(int *p){
    printf("p=%d\n",p);//without &;
    printf("*p=%d\n",*p);
}