#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int H,W;
    int A[31][31];
    int B[31][31];
    char tmp[31];

    scanf("%d%d",&H,&W);

    for(int i = 0; i < H; i++)
    {
        scanf("%s",tmp);
        for(int j = 0; j < W; j++)
        {
            if(tmp[j] == '.')
                A[i][j] = 0;
            else
                A[i][j] = 1;
        }
    }


    for(int i = 0; i < H; i++)
    {
        scanf("%s",tmp);
        for(int j = 0; j < W; j++)
        {
            if(tmp[j] == '.')
                B[i][j] = 0;
            else
                B[i][j] = 1;
        }
    }

    int flag;

    for(int s = 0; s < H; s++)
    {
        for(int t = 0; t < W; t++)
        {
            flag = 0;
            for(int i = 0; i < H; i++)
            {
                for(int j = 0; j < W; j++)
                {   
                    if(A[(i+s)%H][(j+t)%W] != B[i][j])
                        flag = 1;
                }
            }
            if(flag == 0)
            {
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");

    return 0;
}