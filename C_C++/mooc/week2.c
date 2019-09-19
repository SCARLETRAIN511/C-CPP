#include <stdio.h>
int main(){
    int Amount=100;
    int price=0;
    printf("input the cash value:");
    scanf("%d",&Amount);
    printf("Input the money:");
    scanf("%d",&price);
    int change;
    change=Amount-price;
    printf("I will give you %d yuan", change);
    return 0;
}