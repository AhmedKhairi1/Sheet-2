#include <stdio.h>
void reverse(int arr[], int n) {
    int reversed[n];
    int l = n - 1;
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[l];
        l--;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }
}
int main() {
    int n; scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    reverse(arr, n);
}
