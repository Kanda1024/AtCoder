#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N,M;
    int A[100][100];
    int B[100][100] = {0};

    scanf("%d%d",&N,&M);

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
            scanf("%d",&A[i][j]);
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(A[i][j] < A[i][j+1])
                B[A[i][j]][A[i][j+1]] = 1;
            else 
                B[A[i][j+1]][A[i][j]] = 1;
        }
    }

    int cnt = 0;
    for(int i = 1; i <= N; i++)
    {
        for(int j = i+1; j <= N; j++)
        {
            if(B[i][j] == 0)
                cnt++;
            //printf("%d ",B[i][j]);
        }
        //printf("\n");
    }

    printf("%d\n",cnt);

    return 0;
}