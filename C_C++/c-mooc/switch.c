#include <stdio.h>
int main(){
    int type=0;
    scanf("%d",&type);
    switch (type)
    {
    case 100:
        printf("you have passed");
        break;
    case 90:
        printf("good results");
        break;
    default:
        printf("good");
        break;
    }
    
    return 0;
}