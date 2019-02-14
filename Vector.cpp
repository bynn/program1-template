#include "Vector.h"

Vector::~Vector() {
    delete[] planets;
}

void Vector::insert(int index, Planet * p) {
    Planet ** temp;
    if (index > currentPlanets) {
        temp = new Planet * [index + 1];
        for (int i = 0; i < currentPlanets; i++) {
            temp[i] = planets[i];
        }
        for (int i = currentPlanets; i < index; i++) {
            temp[i] = nullptr;
        }
        temp[index] = p;
    }
    else {
        temp = new Planet * [currentPlanets + 1];
        for (int i = 0; i < index; i++) {
            temp[i] = planets[i];
        }
        temp[index] = p;
        for (int i = index + 1; i < currentPlanets; i++) {
            temp[i+1] = planets[i];
        }
    }
    delete[] planets;
    planets = temp;
    currentPlanets++;
}

Planet * Vector::read(int index) {
    if (index > currentPlanets) return nullptr;
    else return planets[index];
}

bool Vector::remove(int index) {
    if (index > currentPlanets) return false;
    Planet ** temp = new Planet * [currentPlanets -1];
    for (int i = 0; i < index; i++) {
        temp[i] = planets[i];
    }
    delete planets[index];
    planets[index] = nullptr;
    for (int i = index + 1; i < currentPlanets; i++) {
        temp[i-1] = planets[i];
    }
    delete[] planets;
    planets = temp;
    return true;
}

unsigned Vector::size() {
    return (unsigned) currentPlanets;
}
