#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,c,total;
    scanf("%lld %lld %lld",&a,&b,&c);

    total = a + b - c;
    printf("%lld",total);
    return 0;
}
