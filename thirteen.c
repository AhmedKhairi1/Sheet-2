#include <stdio.h>
#define PI 3.14

double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    double circumference = calculateCircumference(radius);
    double area = calculateArea(radius);
    printf("Circumference: %.2f\nArea: %.2f\n", circumference, area);
    return 0;
}
