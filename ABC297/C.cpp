#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int H,W;
    char S[102][102];

    scanf("%d%d",&H,&W);

    for(int i = 0; i < H; i++)    
        scanf("%s",S[i]);


    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            if(S[i][j] == 'T' && S[i][j+1] == 'T')
            {
                printf("PC");
                j++;
            }
            else
                printf("%c",S[i][j]);
        }
        printf("\n");
    }


    return 0;
}