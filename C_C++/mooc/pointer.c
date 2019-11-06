#include <stdio.h>
void f(int *p);

int main(){
    int i =6;
    printf("&i=%p\n",&i);//with &, & will give the address of the variable, thus it will show the pointer.
    f(&i);
    int *p=&i;
    
    //Use the pointer to change the variable value.
    *p=26;
    printf("i is %d",i);
    
    //const test
    int num=25;
    const int *p2=&num;
    num=100;// even if the pointer is the constant, the original value can be changed.
    printf("the value of *p is %d \n",*p2);

    //test the array
    int a[]={1,2,3,4,5,6,7};
    int *p3=&a[4];
    int *plist=a;
    printf("*plist=%d\n",*plist); printf("plist[1]=%d\n",plist[0]);
    
    printf("the pointer of a is %p\n",&a);printf("the pointer of plist=%p\n",plist);
    
    printf("The value of p3 is %d \n",p3);  printf("the value of *p3=%d\n",*p3);
    return 0;
}

void f(int *p){
    printf("p=%p\n",p);//without &;//p is the pointer so the it is the value of the pointer.
    printf("*p=%d\n",*p);//*p is the value of the varible
}