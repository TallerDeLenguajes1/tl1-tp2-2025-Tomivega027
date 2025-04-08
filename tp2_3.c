#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 5
#define M 7
int main(){

    srand(time(NULL));
    
    int i,j;
    int mt[N][M];
    int **punteromt = (int **)malloc(N * sizeof(int));
     

    for ( i = 0; i < N; i++)
    {
        punteromt[i] = (int*)malloc(M * sizeof(int));
    }
    

        for(i = 0; i<N; i++)
        {
            for(j = 0; j<M; j++)
            {
                punteromt[i][j] = 1 + rand() % 100;
                printf("%d\t", punteromt[i][j]);
            }

            printf("\n");
        }
    
    for (int i = 0; i < N; i++)
    {
        free(punteromt[i]);   
    }
        free(punteromt);
        
    
}