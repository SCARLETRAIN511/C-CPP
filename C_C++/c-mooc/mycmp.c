#include <stdio.h>
#include <string.h>
int mycmp(char *s1,char *s2){
    int idx=0;
    while (s1[idx]==s2[idx] && s1[idx]!='\0' )
    {
        idx++;
    }
    return s1[idx]-s2[idx];
    /*while (*s1==*s2 && *s2!='\n'){
        s1++;
        s2++
    }
    return *s1-*s2;
    */

}

int main(){
    char s1[]="ABC";
    char s2[]="ABC";
    printf("%d\n",mycmp(s1,s2));
    printf("%d\n",'A'-'A');
    return 0;
}