#include<stdio.h>
#include"energy.h"
int main() 
{
    double mass, velocity, height;

    printf("Enter the mass of the object (in kg): ");
    scanf("%lf", &mass);

    printf("Enter the velocity of the object (in m/s): ");
    scanf("%lf", &velocity);

    printf("Enter the height of the object (in m): ");
    scanf("%lf", &height);

    double kineticEnergy = calculateKineticEnergy(mass, velocity);
    double potentialEnergy = calculatePotentialEnergy(mass, height);
    double totalMechanicalEnergy = calculateTotalMechanicalEnergy(kineticEnergy, potentialEnergy);

    printf("Kinetic Energy: %.2f \n", kineticEnergy);
    printf("Potential Energy: %.2f \n", potentialEnergy);
    printf("Total Mechanical Energy: %.2f \n", totalMechanicalEnergy);
    
    printf("Conservation of Energy Verification:\n");
    printf("Initial Total Mechanical Energy: %.2f \n", totalMechanicalEnergy);

    return 0;
} 
