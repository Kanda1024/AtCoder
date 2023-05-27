#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int N,X;
    int A[200001];

    scanf("%d%d",&N,&X);

    for(int i = 0; i < N; i++)
        scanf("%d",&A[i]);
    
    sort(A, A+N);

    int pos = 0;

    for(int i = 0; i < N; i++)
    {
        while(A[pos] - A[i] < X && pos < N)
        {
            pos++;
        }
                       
        if(A[pos] - A[i] == X && pos < N)
        {
            printf("Yes\n");
            return 0;
        } 
    }

    printf("No\n");

    return 0;
}