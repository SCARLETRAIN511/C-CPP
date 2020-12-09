#include <stdio.h>
struct date
{
    int year;
    int month;
    int day;
};
void formStructure();
int main(){
    struct date today;
    today.day=15;
    today.month=11;
    today.year=2019;
    formStructure();
    struct date *ptoday=&today;
    printf("The point of day is %p\n",ptoday);
    printf("today is %i year month %i  and day %i\n",today.year,today.month,today.day);
    return 0;
}

void formStructure(){
    struct date today={15,12,2019};
    printf("Today is %i - %i - %i\n",today.day,today.month,today.year);
    
}
