#include <ctype.h>
#include <stdio.h>
int main()
{
   int c;
   for(c = 1; c <= 127; ++c)
   	if (isprint(c)!= 0)
             printf("%c ", c);
   return 0;
}
