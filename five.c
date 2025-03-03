#include <stdio.h>
int main() {
    int const n = 3, m = 4;
    int a[n][m];
    printf("Enter a number to search for: ");
    int num;
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == num) {
                printf("%d, %d", i, j);
                return 0;
            }
        }
    }
    printf("your number was not found!");

}