#include <stdio.h>
#define PI 3.1416 

int main() {
float radius, height;
float curvedSurfaceArea, totalSurfaceArea, volume;

printf("Enter the radius of the cylinder: ");
scanf("%f", &radius);

printf("Enter the height of the cylinder: ");
scanf("%f", &height);

curvedSurfaceArea = 2 * PI * radius * height;             
totalSurfaceArea  = 2 * PI * radius * (radius + height);  
volume            = PI * radius * radius * height;         

printf("\n========== Cylinder Calculation ==========\n");
printf("Radius               : %.2f units\n", radius);
printf("Height               : %.2f units\n", height);
printf("------------------------------------------\n");
printf("Curved Surface Area  : %.2f square units\n", curvedSurfaceArea);
printf("Total Surface Area   : %.2f square units\n", totalSurfaceArea);
printf("Volume               : %.2f cubic units\n", volume);
printf("==========================================\n");
return 0;
}