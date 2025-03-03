#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int arr[n][n];
    int curSum = 0, maxSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        curSum = 0;
        for (int j = 0; j < n; j++) {
            curSum +=arr[i][j];
            if(curSum > maxSum) maxSum = curSum;
        }
    }
    printf("Max Sum is: %d", maxSum);
}