#include <stdio.h>
int main(){
    int price=0;
    printf("Please give the amount of the money");
    scanf("%d",&price);
    int change = 100 -price;
    printf("Give you %d pound", change);
    return 0;
}