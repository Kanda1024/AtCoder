#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N;
    char S[200];

    scanf("%d",&N);
    scanf("%s",S);

    for(int i = 0; i < strlen(S)-1; i++)
    {
        if(S[i] == S[i+1])
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}