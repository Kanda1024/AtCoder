#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N,A,B,C;
    int tmp;

    scanf("%d%d%d",&N,&A,&B);

    C = A+B;

    for(int i = 0; i < N; i++)
    {
        scanf("%d",&tmp);
        if(tmp == C)
            printf("%d\n",i+1);
    }

    return 0;
}