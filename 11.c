#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);
    int a[n][n];
    int zeroCounter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0) zeroCounter++;
        }
    }
    if (zeroCounter > n*n/ 2) printf("It is a sparse matrix!");
    else printf("It is not a sparse matrix :(");
}
