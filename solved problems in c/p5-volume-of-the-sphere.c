// Problem: Create a program to compute the volume of the sphere. Use the formula: V=(4/3)*pi(r**3)  where pi is equal to 3.1416 approximately. The r is the radius. Display the results.
#include <stdio.h>

int main() {
    // declaration
    float sphereVolume, radius;
    
    //Input
    printf("Calculating the volume of a sphere: \n");
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    
    //computation
    sphereVolume = (1.333333)*(3.1416)*(radius)*(radius)*(radius);
    
    //Output
    printf("The volume of the spehere with radius %f is %f .\n", radius, sphereVolume);
    
    return 0;
}