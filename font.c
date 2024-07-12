#include "font5x7.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  size_t count = strlen(argv[1]);
  for (int y = 0; y < 7; y++) {
    //printf("<tr>");
    for (int i = 0; i < count; i++) {
      for (int x = 0; x < 5; x++) {
        if (font5x7[(argv[1][i]-' ')*5+x]>>y & 0x01) {
          printf("#");
          //printf("<td class=\"pixel on\"></td>");
        } else {
          printf(" ");
          //printf("<td class=\"pixel\"></td>");
        }
      }
      if (i+1 < count) {
        printf("  ");
        //printf("<td class=\"pixel\"></td><td class=\"pixel\"></td>");
      }
    }
    printf("\n");
    //printf("</tr>\n");
  }
  return 0;
}
