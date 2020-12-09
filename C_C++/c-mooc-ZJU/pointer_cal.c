#include <stdio.h>
int main(){
    //using char to do calculations
    char ac[]={0,1,2,3,4,5,6};
    char *p=ac;
    char *p1=&ac[5];
    printf("p= %p\n",p);
    printf("p+1=%p\n",p+1);

    printf("*p=%d\n",*p);
    printf("*(P+2)=%d\n",*(p+2));
    printf("p1-p=%d\n\n",p1-p);
    //*p --> ac[0]
    //*p+1 --> ac[1]
    
    //using int to do calculations
    int ab[]={0,1,2,3,4,5,6};
    int *q=ab;
    int *q1=&ab[5];
    printf("q= %p\n",q);
    
    printf("*(q+1)=%d\n",*(q+1));
    printf("q1-q=%d\n",q1-q);
    return 0;
}