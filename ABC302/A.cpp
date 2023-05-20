#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    long long int A,B;
    
    
    scanf("%lld%lld",&A,&B);

    if(A%B == 0)
        printf("%lld\n",A/B);
    else
        printf("%lld\n",(A/B)+1);

    return 0;
}