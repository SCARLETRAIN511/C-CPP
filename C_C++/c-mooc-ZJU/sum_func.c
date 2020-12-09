#include <stdio.h>
int sum(int begin,int end){
    int i;
    int sum=0;
    for (i=begin;i<=end;i++){
        sum+=i;
    }
    printf("The sum from %d to %d is %d\n",begin,end,sum);
    return sum;
    
}

int main(){
    sum(12,20);
    return 0;
}