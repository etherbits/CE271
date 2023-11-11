#include <stdio.h>

long sum(long a, long b){
  return a + b;
}

int main(){
  int a = sum((long)1<<60, (long)2);

  printf("a = %d\n", a);
  return 0;
}
