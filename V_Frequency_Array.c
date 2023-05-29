#include <stdio.h>

int main() {
    int n, m, num, count[100001] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        count[num]++;
    }
    for (int i = 1; i <= m; i++) {
        printf("%d\n", count[i]);
    }
    return 0;
}
//here the another solve of this prlbm
/*#include <stdio.h>

int main() {
    int n, m, i, num;
    scanf("%d %d", &n, &m);
    int count[m+1];
    for (i = 1; i <= m; i++) {
        count[i] = 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        count[num]++;
    }
    for (i = 1; i <= m; i++) {
        printf("%d\n", count[i]);
    }
    return 0;
}
*/