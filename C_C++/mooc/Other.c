#include <stdio.h>
int main(){
    int price=0,bill=0;
    printf("Input the price:");
    scanf("%d",&price);
    printf("Input the money value:");
    scanf("%d",&bill);
    if (bill>price){
        printf("I should give you %d",bill-price);
    }else
    {
        printf("you didn't give the enough money");
        printf("%d",1==1);
    }
    return 0;
    
}