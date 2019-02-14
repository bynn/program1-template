#ifndef VECTOR_H
#define VECTOR_H
class Planet;
class Vector {
private:


public:
    // Vector();
    Planet ** planets = nullptr;
    int currentPlanets = 0;
    ~Vector();
    void insert(int index, Planet * p);
    Planet * read(int index);
    bool remove(int index);
    unsigned size();
};






#endif
