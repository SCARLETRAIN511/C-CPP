#include <stdio.h>
int main(){

    char *month[]={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
    //char month[]={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec",0};
    int i;
    scanf("%d",&i);
    printf("%d 是 %s",i,month[i-1]);
    /*
    printf("%d 是 %s ",i,*(month+i-1))
    */
    return 0;
}