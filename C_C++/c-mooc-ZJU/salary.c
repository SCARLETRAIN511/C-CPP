#include <stdio.h>
int main(){
    printf("input the working hours:");
    int wh;
    scanf("%d",&wh);
    if (wh==100){
        printf("Lucky");
    }
    else if(wh<50)
    {
        printf("you work to few");
    }
    else
    {
        printf("fuck you");
    }
    
    
    return 0;
}