#include <stdio.h>
//this is the first function of the script
int isprime(int num){
    int i;
    int w=0;
    for (i=2;i<num;i++){
        if (num%i==0){
            w=1;
            break;
        }
    }
    return w;
}

/*This is the main function of the script*/

int main(){
    int num;
    scanf("%d",&num);
    
    if (isprime(num)==1){
        printf("this is not a prime number");
    }
    else
    {
        printf("this is a prime number");
    }
    
    return 0;
}