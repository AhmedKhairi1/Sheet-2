#include <stdio.h>
int solve(int a[], int n){
    int counterA = 0, counterB = 0, counterC = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i+1]) {
            counterA++;
        }
        else if (a[i] == a[i+1]) counterB++;
        else if (a[i] > a[i+1]) counterC++;
    }
    if (counterA == n - 1) printf("The numbers are increasing!");
    else if (counterB == n - 1) printf("The numbers are not changing, man!");
    else if(counterC == n - 1) printf("Skill issue, the numbers are decreasing...");
     
}
int main() {
    int n; scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    solve(arr, n);
}
