#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int A[101];

    scanf("%d",&N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
        if(i > 0)
        {
            if(A[i] - A[i-1] > 1)
            {
                for(int j = A[i-1]+1; j < A[i]; j++)
                    printf("%d ",j);
            }
            else if(A[i] - A[i-1] < -1)
            {
                for(int j = A[i-1]-1; j > A[i]; j--)
                    printf("%d ",j);
            }
        }
        printf("%d ",A[i]);
    }

    return 0;
}

    