#include <math.h>

namespace phy{

class Object{
public:

// Variables
double x, y, z; // Position (height is z)
double vx, vy, vz; // Velocity
double ax, ay, az; // Acceleration
double fx, fy, fz; // Forces

// Methods
void setV(double _x, double _y, double _z){
    this->vx = _x;
    this->vy = _y;
    this->vz = _z;
};

void setA(double _x, double _y, double _z){
    this->ax = _x;
    this->ay = _y;
    this->az = _z;
};

void setF(double _x, double _y, double _z){
    this->fx = _x;
    this->fy = _y;
    this->fz = _z;
};


// Constructor
Object(double _x, double b, double c)
{
    x=_x;
    y=b;
    z=c;
}
};



class Vector{

public:
double x, y, z; // Components

// Methods
double module()
{
    return sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));
}

// Constructor
Vector(double a, double b, double c){
    x=a;
    y=b;
    z=c;
}
};

// Vector operations
Vector add(Vector v1, Vector v2){
    return Vector (v1.x+v2.x , v1.y+v2.y , v1.z+v2.z);
}

Vector subtract(Vector v1, Vector v2){
    return Vector (v1.x-v2.x , v1.y-v2.y , v1.z-v2.z);
}
}