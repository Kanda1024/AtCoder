#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char S[10][10];

    for(int i = 0; i < 8; i++)
        scanf("%s",S[i]);

    for(int j = 0; j < 8; j++)
    {
        for(int i = 0; i < 8; i++)
        {
            if(S[7-j][i] == '*')
                printf("%c%d\n",i+'a',j+1);
        }
    }


    return 0;
}