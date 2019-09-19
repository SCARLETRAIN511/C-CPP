#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int num=rand();
    int count=0;
    int a=0;
    printf("I have made the number\n");
    do{
        printf("please guess");
        scanf("%d",&a);
        if (a>num){
            printf("too big");
        }
        else if (a<num){
            printf("too small");
        }
    } while (a != num);
    printf("Great, you have made the answer");
    return 0;
}