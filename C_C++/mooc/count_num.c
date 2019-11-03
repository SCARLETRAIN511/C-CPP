#include <stdio.h>
int main(){
    const int number=10;
    int count[number];
    for (int i = 0; i < number; i++)
    {
        count[i]=0;
    }
    int x=0;
    while (x!=-1)
    {
        scanf("%d",&x);

        if (x>=0 && x<number)
        {
            count[x]++;    
        }
    }
    for (int i = 0; i < number; i++)
    {
        printf("%d:%d\n",i,count[i]);
    }
    return 0;
        
}