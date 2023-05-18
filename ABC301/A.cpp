#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    char S[101];
    int cnt_T,cnt_A;
    cnt_T = cnt_A = 0;

    scanf("%d",&N);
    scanf("%s",S);

    for(int i = 0; i < N; i++)
    {
        if(S[i] == 'T')
            cnt_T++;
        else if(S[i] == 'A')
            cnt_A++;            
    }

    if(cnt_T > cnt_A)
        printf("T\n");
    else if(cnt_T < cnt_A)
        printf("A\n");
    else
        if(S[N-1] == 'T')
            printf("A\n");
        else if(S[N-1] == 'A')
            printf("T\n");
    
    return 0;
}