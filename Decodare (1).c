#include<stdio.h>
#include<math.h>
#include<string.h>

  int prim(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i < n; i++)
      if (n % i == 0) return 0;
    return 1;
  }
int main() {
  FILE * f;
  f = fopen("in.txt", "r");
  int i, j, x, n, k;
  char sir[1000];
  char c;
  fscanf(f, "%s", & sir);
  printf("Sirul codificat : ");

  n = strlen(sir);

  for (i = 0; i < n; i++)
    printf("%c", sir[i]);

  printf("\n\n\nDecodificare : ");
  c = sir[0];
  for (i = 1; i < n; i++) {

    k = 1;
    while (c == sir[i]) {
      k++;
      i++;
    }

    if (prim(k))
      printf("%c", c);
    c = sir[i];
  }

  printf("\n");
}
