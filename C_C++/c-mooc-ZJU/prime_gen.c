#include <stdio.h>
int main(){
    int x;int num=0;
    for (x=2;num<50;x++){
        int i;
        int isprime=0;
        for (i=2;i<x;i++){
            if (x%i == 0){
                isprime=1;
                break;
            }
        }
        if (isprime==0){
            num++;
            printf("%d is a prime number\n",x);
        }
    }
    return 0;
}