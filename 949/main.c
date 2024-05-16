#include <stdio.h>
#include <stdlib.h>


int main()
{
 int num,n,k;
 scanf("%d",&num);
 n = (num/100)%10;
 k = (num%100)/10;
 if(n==0)
 {
     printf("%d",k);
     return 0;
 }
     printf("%d%d",n,k);

  return 0;
}
