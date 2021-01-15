#include <stdio.h>
#include <string.h>

extern char* query(const char* url);
extern void free_result(char* res);

int main() {
  char *r = query("https://ya.ru");
  if (r) {
    printf("%zu\n", strlen(r));
  } else {
    printf("no data\n");
  }
  free_result(r);

  r = query("https://www.google.com");
  if (r) {
    printf("%zu\n", strlen(r));
  } else {
    printf("no data\n");
  }
  free_result(r);

  return 0;
}
