#include <stdio.h> /*#编译预处理*/
#define pi 3.14
#define p2 2*pi

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
    static int all=1; /*静态本地变量==全局变量但是作用域只在函数里*/
    gAll+=2;
    printf("in %s gall=%d\n",__func__,gAll);
    printf("in %s all = %d \n",__func__,all);
    all+=2;
    printf("in %s all = %d \n",__func__,all);
    return all;

}