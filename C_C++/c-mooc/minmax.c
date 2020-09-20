#include <stdio.h>
void minmax(int a[],int len,int *max, int *min);

int main(void){
    int a[]={1,2,3,4,5,6,7,8,12,42,2456,364,3};
    int min, max;
    printf("size of a= %p \n",a);
    minmax(a,sizeof(a)/sizeof(a[0]), &max, &min);
    printf("The max is %d, min is %d\n",max,min);
    return 0;
}

void minmax(int a[]/*can also use *a here*/, int len, int *max,int *min){
    int i;
    *min=*max=a[0];
    for (i = 1; i < len; i++)
    {
        if (a[i]<*min){
            *min=a[i];
        }
        if (a[i]>*max){
            *max=a[i];
        }
    }
    
}