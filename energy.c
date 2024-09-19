#include "energy.h"
#include<stdio.h>
#define GRAVITY 9.81

double calculateKineticEnergy(double mass, double velocity)
{
    return 0.5 * mass * velocity * velocity;
}
double calculatePotentialEnergy(double mass, double height)
{
    return mass * GRAVITY * height;
}
double calculateTotalMechanicalEnergy(double kineticEnergy, double potentialEnergy)
{
    return kineticEnergy + potentialEnergy;
}
