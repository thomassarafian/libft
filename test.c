#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://wwwtutorial\0spointcom";
   const char ch = '\0';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
} 
