#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N;
    int A[101][101];
    int B[101][101];
    int C[101][101];
    int flag;

    scanf("%d",&N);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            scanf("%d",&A[i][j]);
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            scanf("%d",&B[i][j]);
    }

    //printf("-----\n");

    for(int k = 0; k < N*N; k++)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                C[i][j] = A[N-1-j][i];
                //printf("%d ",C[i][j]);
            }
            //printf("\n");
        }

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
                A[i][j] = C[i][j];
        }

        flag = 1;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(A[i][j] == 1 && B[i][j] != 1)
                    flag = 0;
            }
        }
        if(flag == 1)
        {
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");

    return 0;
}