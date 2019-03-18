
/**
 * File              : vc_split_whitespaces.c
 * Author            : Daisuke, Tom
 * Date              : Mon, Feb 11, 2019
 */#include <stdlib.h>
#include <printf.h>

char **vc_split_whitespaces(char *str) {
  char *p1 = str;
  unsigned int total = 0;
  for (; *p1; p1++) total++;
  total++;
  char **result = (char **) malloc(sizeof(char) * total);

  char *p3 = str;
  int index = 0;
  int length = 0;
  char string[8];
  for (; *(p3 - 1); p3++) {
    if (*p3 == ' ' || *p3 == '\t' || *p3 == '\n' || *p3 == '\0') {
      result[index] = (char *) malloc(sizeof(char) * length);

      string[length] = '\0';

      char *p4 = string;
      char *p5 = result[index];
      for (; *p4; p4++, p5++) {
        *p5 = *p4;
      }
      *p5 = '\0';

      index++;
      length = 0;

    } else {
      string[length] = *p3;
    }

    printf("==========\n");
    printf("%c\n", *p3);
    printf("==========\n");

    length++;
  }
  index++;
  result[index] = (char *) malloc(sizeof(char) * 1);
  result[index][0] = '\0';

  return result;
}

