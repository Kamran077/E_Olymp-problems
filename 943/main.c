#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, sum;
   scanf("%d",&a);
   sum = 100 * (a % 10) + 10 * ((a / 10) % 10) + a / 100;
   printf("%d", sum);

   return 0;
}
