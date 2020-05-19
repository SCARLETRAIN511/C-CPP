#include <stdio.h>

char c1[] = ["abcdefgh"];

void main(){
  char *p;
  p = &(c1[2]);
  printf("\n%s",p);
}
