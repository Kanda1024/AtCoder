#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int min(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

int main()
{
    int H,W;
    int C[300][300] = {0};
    char tmp[101];
    int N;
    int ans[101] = {0};

    scanf("%d%d",&H,&W);
    N = min(H,W);

    for(int i = 0; i < H; i++)
    {
        scanf("%s",tmp);
        for(int j = 0; j < W; j++)
        {
            if(tmp[j] == '#')
                C[i][j] = 1;
        }
    }

    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            if(C[i][j] == 1 && C[i-1][j-1] == 1 && C[i+1][j-1] == 1 && C[i-1][j+1] == 1 && C[i+1][j+1] == 1)
            {
                for(int k = 2; k <= N+1; k++)
                {
                    if(!(C[i-k][j-k] == 1 && C[i+k][j-k] == 1 && C[i-k][j+k] == 1 && C[i+k][j+k] == 1))
                    {
                        ans[k-2]++;
                        break;
                    }
                }
            }
        }
    }

    for(int i = 0; i < N; i++)
        printf("%d ",ans[i]);

    printf("\n");

    return 0;
}
