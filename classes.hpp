#include "vectors.hpp"

namespace phy{

class Object{
public:

// Variables
phy::Vector pos = {0, 0, 0}; // Position (x, y, z). z is used for height
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
Object(double _x, double _y, double _z)
{
    this->pos.x=_x;
    this->pos.y=_y;
    this->pos.z=_z;
} 


};

}