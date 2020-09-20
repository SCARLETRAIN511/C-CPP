#include <stdio.h>

int main() {
    double e = 1;
    int result;
    int numOfTerms;
    printf("Type the number of terms");
    scanf("%d",&numOfTerms);

    for (int i = 1;i < numOfTerms; i++){
        result = 1;
        for (int j = 1;j<=i;j++){
            result = result * j;
        }
        e += 1.0/result;
    }
    
    printf("The approximation result is %f \n", e);
    return 0;
}