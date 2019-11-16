#include <stdio.h>
enum color {red,green,blus};//enum must be int
void f(enum color c);

int main(){
    enum color t=red;
    scanf("%d",&t);
    f(t);
    return 0;
}

void f(enum color c){
    printf("%d\n",c);
}