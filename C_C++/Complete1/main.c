#include <stdio.h>
#include "min.h"
#include "max.h"
//<>指在指定目录中去找
//""指在当前目录上去寻找

int main(void) {
    int a=5;
    int b=6;
    struct node x={1,"name"};
    printf("the value of x.a is %d\n",x.value);
    printf("%d\n",min(a,b));
    printf("%d\n",max(gAll,a));
    return 0;
}

