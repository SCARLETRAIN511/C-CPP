#include <stdio.h>

int main(){
    int num;
    printf("%3.*f\n",5,121.115213);//printf usage
    printf("%dty%n\n",12344,&num);
    printf("%d\n",num);
    return 0;
}