#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int H,W;
    char S[110][110];

    scanf("%d%d",&H,&W);

    for(int i = 0; i < H; i++)
        scanf("%s",S[i]);

    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            if(S[i][j] == 's')
            {
                if(S[i][j+1] == 'n' && S[i][j+2] == 'u' && S[i][j+3] == 'k' && S[i][j+4] == 'e')
                {
                    for(int k = 0; k < 5; k++)
                        printf("%d %d\n",i+1, j+k+1);
                }
                
                if(S[i+1][j] == 'n' && S[i+2][j] == 'u' && S[i+3][j] == 'k' && S[i+4][j] == 'e')
                {
                    for(int k = 0; k < 5; k++)
                        printf("%d %d\n",i+k+1, j+1);
                }
                
                if(S[i+1][j+1] == 'n' && S[i+2][j+2] == 'u' && S[i+3][j+3] == 'k' && S[i+4][j+4] == 'e')
                {
                    for(int k = 0; k < 5; k++)
                        printf("%d %d\n",i+k+1, j+k+1);
                }

                if(S[i+1][j-1] == 'n' && S[i+2][j-2] == 'u' && S[i+3][j-3] == 'k' && S[i+4][j-4] == 'e')
                {
                    for(int k = 0; k < 5; k++)
                        printf("%d %d\n",i+k+1, j-k+1);
                }
                
            }
            if(S[i][j] == 'e')
            {
                if(S[i][j+1] == 'k' && S[i][j+2] == 'u' && S[i][j+3] == 'n' && S[i][j+4] == 's')
                {
                    for(int k = 4; k >= 0; k--)
                        printf("%d %d\n",i+1, j+k+1);
                }

                if(S[i+1][j] == 'k' && S[i+2][j] == 'u' && S[i+3][j] == 'n' && S[i+4][j] == 's')
                {
                    for(int k = 4; k >= 0; k--)
                        printf("%d %d\n",i+k+1, j+1);
                }

                if(S[i+1][j+1] == 'k' && S[i+2][j+2] == 'u' && S[i+3][j+3] == 'n' && S[i+4][j+4] == 's')
                {
                    for(int k = 4; k >= 0; k--)
                        printf("%d %d\n",i+k+1, j+k+1);
                }

                if(S[i+1][j-1] == 'k' && S[i+2][j-2] == 'u' && S[i+3][j-3] == 'n' && S[i+4][j-4] == 's')
                {
                    for(int k = 4; k >= 0; k--)
                        printf("%d %d\n",i+k+1, j-k+1);
                }
            }
        }
    }

    
    return 0;
}