#include <stdio.h>

int main() {
    float side, area;

    // Input side length of the cube
    printf("Enter the length of the side of the cube: ");
    scanf("%f", &side);

    // Calculate surface area of cube
    area = 6 * side * side;

    // Display result
    printf("The surface area of the cube is: %.2f\n", area);

    return 0;
}
