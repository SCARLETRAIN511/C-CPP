#include <stdio.h>
int f(void);
int gAll=12;

int main(int argc, char const *argv[]){
    f();
    f();
    f();
    f();
    return 0;
}

int f(void){
    static int all=1; /*静态本地变量*/
    gAll+=2;
    printf("in %s gall=%d\n",__func__,gAll);
    printf("in %s all = %d \n",__func__,all);
    all+=2;
    printf("in %s all = %d \n",__func__,all);
    return all;

}