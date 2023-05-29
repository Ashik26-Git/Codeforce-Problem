#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int matrix[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isUnitMatrix = 1;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j && matrix[i][j] != 1) {
                isUnitMatrix = 0;
                break;
            } else if (i != j && matrix[i][j] != 0) {
                isUnitMatrix = 0;
                break;
            }
        }
        if (!isUnitMatrix) {
            break;
        }
    }

    if (isUnitMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
