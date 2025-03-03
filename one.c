#include <stdio.h>
int main() {
    int const n = 10;
    int arr[n], max, min; float average;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        average += arr[i];
    }
    average /= n;
    printf("min, max and average: %d %d %f", min, max, average);
}