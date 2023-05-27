#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N;
    char S[200];
    char T[200];

    scanf("%d",&N);
    scanf("%s",S);
    scanf("%s",T);

    for(int i = 0; i < N; i++)
    {
        if(!(S[i] == T[i] || (S[i] == '1' && T[i] == 'l') || (S[i] == 'l' && T[i] == '1') || (S[i] == '0' && T[i] == 'o') || (S[i] == 'o' && T[i] == '0')))
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}