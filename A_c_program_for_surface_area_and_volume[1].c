/*
Name:kaburu-Alison-bundi
Reg-No:26552
Description:program to compute surface area and volume of a cylinder
*/
#include <stdio.h>
#define PI 3.14159265359

int main() {
    double radius, height;
    double volume, surface_area;

    // Prompt the user for radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * (radius + height);

    // Display the results
    printf("Volume of the cylinder: %.2lf cubic units\n", volume);
    printf("Surface area of the cylinder: %.2lf square units\n", surface_area);

    return 0;
}