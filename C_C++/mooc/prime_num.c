#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int i;
    int w=0;
    for (i=2;i<num;i++){
        if (num%i==0){
            w=1;
            printf("%d",i);
            break;
        }
    }
    if (w==1){
        printf("this is not a prime numver");
    }
    else
    {
        printf("this is a prime number");
    }
    
    return 0;
}