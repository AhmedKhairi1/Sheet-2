#include <stdio.h>
void calc(int arr[]) {
    int average = 0;
    for (int i = 0; i < 5; i++) {
        average += arr[i];
    }
    average /= 5;
    printf("The average of this student is: %d\n", average);
}
int main() {
    int n; scanf("%d", &n);
    int grades[5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &grades[j]);
        }
        calc(grades);
    }
}
