#include "palp.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int map[8][12] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

  writePalp(map, "HELLOWORLD"); //LOOOL

  char *tx = readPalp(map);
  printf("%s\n", tx); // Should print: ABCZ

  free(tx);

  for (int i = 0; i < 8; i++) {
    for (int f = 0; f < 12; f++) {
      printf("%d", map[i][f]);
    }
    printf("\n");
  }

  printf("\n:I mean fck u\n");
  return 0;
}
