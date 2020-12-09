#include <stdio.h>
int main(){

	int i;
    char a[][10] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d",&i);
    printf("%d月的英语表示为：%s",i,a[i-1]);
    return 0;

}