#include <stdio.h>
int main(){
    int num;
    int n=1;
    int sum=0;
 /* do {
        scanf("%d",&num);
        if (num != -1){sum+=num;
        n++;
        printf("the sum is %d\n",sum);
        printf("num of number is %d\n",n);}
    } while (num!=-1);*/
    scanf("%d",&num);
    while (num != -1){
        
        sum+=num;
        n++;
        scanf("%d",&num);
        printf("The sum is %d\n",sum);
        printf("The total number is %d\n",n);
    }
    float avg=1.0*sum/n;
    printf("The average is %f\n",avg);
    return 0;
}