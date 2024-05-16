#include <stdio.h>
#include <stdlib.h>


int main()
{
 int num,k,n;
 scanf("%d",&num);
 k = num / 100;
 n = num % 10;

 printf("%d%d",k,n);

  return 0;
}
