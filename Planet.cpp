#include "Planet.h"
#include <stdlib.h>

Planet::Planet(int distance) {
    this->distance = rand()%3000;
}

long int Planet::getID() {
    return &this;
}
