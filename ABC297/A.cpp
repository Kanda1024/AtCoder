#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N,D;
    int T[101];

    scanf("%d%d",&N,&D);

    for(int i = 0; i < N; i++)
        scanf("%d",&T[i]);
    
    for(int i = 0; i < N-1; i++)
    {
        if(T[i+1] - T[i] <= D)
        {
            printf("%d\n",T[i+1]);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}