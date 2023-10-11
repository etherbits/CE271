#include <stdio.h>

void show_bytes(unsigned char * ptr, size_t len){
  // converting to big endian ordering
  for(size_t i = len-1; i < len; i--){
    printf("%.2x ", ptr[i]);
  }

  printf("\n");
}

int main(){
  int a = 0x87654321;
  unsigned char * ap = &a;

  a &= 0xff;

  int b = 0x87654321;
  unsigned char * bp = &b;

  b = b ^ ~0xff;

  int c = 0x87654321;
  unsigned char * cp = &c;

  c = c | 0xff;

  show_bytes(ap, sizeof(a));
  show_bytes(bp, sizeof(b));
  show_bytes(cp, sizeof(c));

  return 0;
}
