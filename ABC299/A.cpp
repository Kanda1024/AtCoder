#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    char S[200];

    scanf("%d",&N);
    scanf("%s",S);

    int flag = 0;

    for(int i = 0; i < N; i++)
    {
        if(S[i] == '|' && flag == 1)
            flag = 0;
        else if(S[i] == '|')
            flag = 1;

        if(flag == 1 && S[i] == '*')
        {  
              printf("in\n");
              return 0;
        }
    }

    printf("out\n");

    return 0;
}