#include<stdio.h>

int main(){
  char *s = "Hello"; 
  char r[] = "Hello";
  r[0] = 'M';
  s++;

  printf("%s %s\n",s,r);
  return 0;
}
