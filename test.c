#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    printf("atoi('gladir')=%i\n",atoi("gladir"));
    printf("atoi('gladir.')=%i\n",atoi("gladir."));
    printf("atoi('gladir.com')=%i\n",atoi("gladir.com"));
    printf("atoi('16gladir.com')=%i\n",atoi("16gladir.com"));
    printf("atoi('gladir.com16')=%i\n",atoi("gladir.com16"));
    printf("atoi('gladir16.17com')=%i\n",atoi(" 2147483648"));
    return 0;
}
