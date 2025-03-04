#include <stdio.h>
#include <stdbool.h>
bool ascending(int arr[], int n) {
    int counter = 0;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] < arr[i+1]) {
            counter++;
        }
    }
    if (counter == n - 1) return true;
    else return false;
}
int main() {
    int n; scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    if (ascending(arr, n)) printf("Your array is awesome and ascending\n");
    else printf("Your array is not awesome, nooo!\n");
}
