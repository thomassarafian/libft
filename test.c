#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char str[] = "   \n 2 TUTORIALS POINT";
	
   while( str[i] ) {
      putchar(tolower(str[i]));
      i++;
   }
   
   return(0);
}
