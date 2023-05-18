#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char S[200001];
    char T[200001];

    int cnt_S[30] = {0};
    int cnt_T[30] = {0};
    int diff;

    scanf("%s%s",S,T);


    for(int i = 0; i < strlen(S); i++)
    {
        if(S[i] == '@')
            cnt_S[26]++;
        if(T[i] == '@')
            cnt_T[26]++;

        cnt_S[S[i]-'a']++;
        cnt_T[T[i]-'a']++;
    }

    int flag = 0;

    for(int i = 0; i < 26; i++)
    {

        diff = cnt_T[i] - cnt_S[i];

        if(i == 'a'-'a' || i == 't'-'a' || i == 'c'-'a' || i == 'o'-'a' || i == 'd'-'a' || i == 'e'-'a' || i == 'r'-'a')
        {
            if(diff > 0)
            {
                if(cnt_S[26] >= diff)
                    cnt_S[26] -= diff;
                else
                {
                    printf("No\n");
                    return 0;
                }
            }    
            else if(diff < 0)
            {
                if(cnt_T[26] >= -diff)
                    cnt_T[26] += diff;
                else
                {
                    printf("No");
                    return 0;
                }
            }
        }
        else if(diff != 0)
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}