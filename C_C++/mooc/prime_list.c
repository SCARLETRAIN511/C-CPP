#include <stdio.h>
int isprime(int x){
    int iseven=0;
    int isprime=1;
    if (x%2==0 && x!=2)
    {
        iseven=1;
        isprime=0;
    }

    if (iseven==0)
    {
        for (int i = 3; i < x/2; i+=2)
        {
            if (x%i==0)
            {
                isprime=0;
                break;
            }
            
        }
    }
    if (isprime==0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}

int main(){
    isprime(2);
    return 0;
}