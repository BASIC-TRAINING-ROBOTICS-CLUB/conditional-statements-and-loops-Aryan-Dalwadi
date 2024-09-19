#ifndef ENERGY_H
#define ENERGY_H
#include<stdio.h>
double calculateKineticEnergy(double mass, double velocity);
double calculatePotentialEnergy(double mass, double height);
double calculateTotalMechanicalEnergy(double kineticEnergy, double potentialEnergy);

#endif
