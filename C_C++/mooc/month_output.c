#include <stdio.h>
int main(){
    char m[][10]={'Jan','Feb','Mar','Apr','May','June','july','aug','Sep','Oct','Nov','Dec'};
    int num;
    scanf("%d",&num);
    printf('%s\n',m[num+1]);
    return 0;
}