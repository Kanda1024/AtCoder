#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N,M;
    char S[15][15];
    int P[15] = {0};

    scanf("%d%d",&N,&M);

    for(int i = 0; i < N; i++)
    {
        scanf("%s",S[i]);
        P[i] = i;
    }

    int cnt;
    int flag;

    do 
    {
        flag = 0;

        for(int i = 0; i < N-1; i++)
        {
            cnt = 0;
            for(int j = 0; j <M; j++)
            {
                if(S[P[i]][j] != S[P[i+1]][j])
                    cnt++;
            }

            //printf("%s %s %d\n",S[P[i]], S[P[i+1]], cnt);
            if(cnt != 1)
                flag = 1;
        }
        if(flag == 0)
        {
            printf("Yes\n");
            return 0;
        }
        //printf("----------\n");
    }while(next_permutation(P, P + N));

    printf("No\n");

    return 0;
}