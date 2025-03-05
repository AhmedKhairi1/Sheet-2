#include <stdio.h>

int main() {
    int n, issymmetric = 1;
    scanf("%d", &n);
    
    int arr[n][n];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                issymmetric = 0;
                break;
            }
        }
        if (!issymmetric) break;
    }

    if (issymmetric) {
        printf("This matrix is symmetric\n");
    } else {
        printf("This matrix is not symmetric\n");
    }

    return 0;
}
