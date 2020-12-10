#include <stdio.h>
struct point
{
    int x;
    int y;
};


struct point* getStruct(struct point*);
void output(struct point);
void print(const struct point *p);
 
int main(int argc,char const *argv[]){
    struct point y={0,0};
    output(y);
    output(*getStruct(&y));
    print(getStruct(&y));
    
    getStruct(&y)->x=0;
    *getStruct(&y)=(struct point){1,2};
}

struct point* getStruct(struct point *p){
    scanf("%d",&p->x);
    scanf("%d",&p->y);
    return p;
}

void output(struct point p){
    printf("%d %d\n",p.x,p.y);
}

void print(const struct point *p){
    printf("%d %d\n",p->x,p->y);
}