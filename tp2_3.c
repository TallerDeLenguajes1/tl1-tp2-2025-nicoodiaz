#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 5
#define M 7

int main() 
{
    int i,j;
    int mt[N][M];
    //srand(time(NULL));
    int *punteromt = &mt[0][0];

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            mt[i][j]=1+rand()%100;
            printf("%0.lf   ", mt[i][j]);
        }
        printf("\n");
    }

    printf("\n0AAAAAA %d\n", mt[3][4]);
    printf("\n0AAAAAA %d\n", mt[2][2]);
    
    return 0;
}