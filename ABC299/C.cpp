#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    char S[200010];
    int cnt;
    int ans = 0;
    int flag = 0;
    int pos = 0;

    scanf("%d",&N);
    scanf("%s",S);

    cnt = 0;
    for(int i = 0; i < N; i++)
    {
        if(S[i] == 'o')
            cnt++;
        else
            cnt = 0;

        if(cnt > ans)
        {    
            ans = cnt;
            pos = i;
        }
    }

    if(ans >= 1 && (S[pos+1] == '-' || S[pos-ans] == '-'))
        printf("%d\n",ans);
    else
        printf("-1\n");

    return 0;
}