#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum;
    scanf("%d",&num);
    sum = (num/10 + num%10)*(num/10 + num%10);
    printf("%d",sum);
    return 0;
}
