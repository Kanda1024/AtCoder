#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char S[61];
    long long int N;
    long long int num = 0;
    long long int tmp;

    scanf("%s",S);
    scanf("%lld",&N);


    for(int i = 0; i < strlen(S); i++)
    {
        if(S[i] == '1')
            num += (long long int)pow(2,strlen(S)-1-i);
    }

    if(num > N)
    {
        printf("-1\n");
        return 0;
    }

    for(int i = 0; i < strlen(S); i++)
    {
        if(S[i] == '?')
        {
            tmp = (long long int)pow(2,strlen(S)-1-i);
            if(num + tmp <= N)
                num += tmp;
        }
    }

    printf("%lld\n",num);

    return 0;
}