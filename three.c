#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int arr[n]; int sum_odd = 0, sum_even = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) sum_even += arr[i];
        else sum_odd += arr[i];
    }
    printf("Sum even is: %d, Sum odd is: %d", sum_even, sum_odd);
}