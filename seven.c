#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    // when i=j print 0
    int arr[n][n];
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                arr[i][j] = -1;
            }
            if (i == j) {
                arr[i][j] = 0;
            }
            if (j > i) {
                arr[i][j] = 1;
            }
            printf("%2d\t", arr[i][j]);
        }
        printf("\n");
    }
}