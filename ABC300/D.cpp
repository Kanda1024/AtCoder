#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void eratos(int N, int *result)
{
    int data[100000] = {0};
    int ans[100000] = {0};

    for(int i = 2; i < N; i++)
        data[i] = 1;
    
    int m = 2;
    int n = 0;

    do 
    {
        //素数の倍数をリストから削除
        for(int i = 2*m; i <= N; i += m)
            data[i] = 0;
        result[n++] = m;
        do
        {
            m++;
        }while(data[m] == 0 && m <= N);

    }while(m <= N);
}

int main()
{
    int N;
    int prime[100000] = {0};
    int ans = 0;

    scanf("%d",&N);

    eratos(N, prime);

    int len = 0;

    for(int i = 0; i < 100000; i++)
    {
        if(prime[i] == 0)
        {
            len = i;    
            break;
        }
    }
    

    for(int a = 0; a < len; a++)
    {
        for(int b = a+1; b < len; b++)
        {
            for(int c = b+1; c < len; c++)
            {
                if(a*a+b*c*c <= N && a*a+b*c*c >= 300 && a*a+b*c*c <= int(pow(10,12)))
                    ans++;
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}