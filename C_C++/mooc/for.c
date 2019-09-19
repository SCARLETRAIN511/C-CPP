#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact=1;
    int i=1;
    for (i=n;i>=2;i--){
        fact*=n;
    }
    print("%d",fact);
    
    return 0;
}