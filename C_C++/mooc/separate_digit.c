#include <stdio.h>
int main(){
    int num=0;
    scanf("%d",&num);
    int t=0;
    do{
        int d=num%10;
        t=t*10+d;
        num/=10;
    } while (num>0);
    printf("%d\n",t);
    do
    {
        int d=t%10;
        printf("%d",d);
        if (t>=10)
        {
            printf(" ");
        }
        
        t/=10;
    } while (t>0);
    printf("\n");
    
    return 0;
}