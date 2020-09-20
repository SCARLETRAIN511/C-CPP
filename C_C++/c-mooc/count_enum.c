#include <stdio.h>
enum color {Red,Yellow,Green,NumColors};
int main(){
    int color=-1;
    char *ColorNames[NumColors]={"red","yellow","green",};
    char *ColorName=NULL;
    printf("Type your favourite color");
    scanf("%d",&color);
    if (color>=0 && color<=NumColors){
        ColorName=ColorNames[color];
    }
    else
        {
           ColorName="unknown"; 
        }
    printf("你喜欢的颜色是%s\n",ColorName);
    return 0;
}