#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N;
    char S[200];
    int flag = 0;

    scanf("%d",&N);
    scanf("%s",S);

    for(int i = 0; i < strlen(S); i++)
    {
        if(S[i] == 'o')
            flag = 1;
        if(S[i] == 'x')
        {
            printf("No\n");
            return 0;
        }
    }

    if(flag == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}