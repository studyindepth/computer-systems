#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int end) {
    int i;
    for (i = 0; i < end; i++) {
        printf("%.2x", start[i]);    
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float  x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(int *p) {
    show_bytes((byte_pointer) &p, sizeof(void *));
}

void test_show_bytes(int val) {
  int ival = val;
  float fval = (float) ival;
  int *pval = &ival;
  show_int(ival);
  show_float(fval);
  show_pointer(pval);
}

int main() {
  test_show_bytes(12345);
  int val = 0x87654321;
  byte_pointer valp = (byte_pointer) &val;
  show_bytes(valp, 1); /* A. */
  show_bytes(valp, 2); /* B. */
  show_bytes(valp, 3); /* C. */

  const char *s = "abcdef";
  show_bytes((byte_pointer) s, 6);
}
