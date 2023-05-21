#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N,T;
    int C[200000],R[200000];

    int max = 0;
    int ans = 0;

    scanf("%d%d",&N,&T);

    for(int i = 0; i < N; i++)
        scanf("%d",&C[i]);

    for(int i = 0; i < N; i++)
        scanf("%d",&R[i]);

    for(int i = 0; i < N; i++)
    {
        if(C[i] == T && R[i] >= max)
        {
            max =  R[i];
            ans = i;
        }
    }

    if(max == 0)
    {
        max = R[0];
        ans = 0;
        for(int i = 1; i < N; i++)
        {
            if(C[i] == C[0] && R[i] >= max)
            {
                max = R[i];
                ans = i;
            }
        }
    }

    printf("%d\n",ans+1);

    return 0;
}