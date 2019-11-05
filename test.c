#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char S[] ="Ceci est une chaine de caracteres avec Gladir.com contenu dedans !";
  printf("%s\n",strnstr(S,"Gladir.com", 48));
  return 0;
}
