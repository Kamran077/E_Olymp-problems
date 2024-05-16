#include <stdio.h>
#include <stdlib.h>

int main()
{
 long long i,a,b,sum;
 sum = 0;
 scanf("%lld %lld",&a,&b);

 for(i = a; i <= b ; i++)
 {
     sum+=i;
 }
  printf("%d",sum);



    return 0;
}
