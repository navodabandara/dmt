#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dmt/dmt.h"

int main(void) {

  char *a = dmt_malloc(16);
  char *b = dmt_calloc(16, 2);
  char *c = dmt_malloc(128);

  a = dmt_realloc(a, 128);

  printf("Current memory usage: %u bytes\n", dmt_usage());

  dmt_free(c);

  dmt_dump(stdout);

  printf("done\n");
  return 0;
}
