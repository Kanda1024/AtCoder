#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char S[10];
    scanf("%s",S);

    for(int i = 0; i < 8; i++)
    {
        if(S[i] == 'B')
        {
            for(int j = i+1; j < 8; j++)
            {
                if(S[j] == 'B')
                {
                    if(i%2 == j%2)
                    {
                        printf("No\n");
                        return 0;
                    }
                }
            }
        }
    }

    for(int i = 0; i < 8; i++)
    {
        if(S[i] == 'R')
        {
            for(int j = i+1; j < 8; j++)
            {
                if(S[j] == 'K')
                    break;
                if(S[j] == 'R')
                {
                    printf("No\n");
                    return 0;
                }
            }
        }
    }

    printf("Yes\n");

    return 0;
}