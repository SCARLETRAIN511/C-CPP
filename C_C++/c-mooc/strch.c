#include <stdio.h>
#include <string.h>
int main(){
    char c[]="hello";
    char *p=strchr(c,'l');
    printf("%s\n",p);
    p=strchr(p+1,'l');
    printf("%s\n",p);
    return 0;
}