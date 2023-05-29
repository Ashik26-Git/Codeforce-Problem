#include <stdio.h>

int main()
{
    int N, M;
    int i, j;
    scanf("%d", &N);
    scanf("%d", &M);
    int matrix[N][M];
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (j = 0; j < M; j++) {
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");
    for (i = 0; i < N; i++) {
        printf("%d ", matrix[i][M - 1]);
    }

    return 0;
}
