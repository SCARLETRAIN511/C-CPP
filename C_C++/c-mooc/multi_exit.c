#include <stdio.h>
int main(){
    int x;
    int one,two,five;
    scanf("%d",&x);
    for (one=1;one<x*10;one++){
        for (two=2;two<x*10/2;two++){
            for (five=5;five<x*10/5;five++){
                if (one+two*2+five*5==x*10){
                    printf("you can use %d 1p plus %d 2p plus %d 5p to get %d y",one,two,five,x);
                    goto out;/*only used in exiting multiple loops*/
                }
            }
        }
    }
    out:
    return 0;
}