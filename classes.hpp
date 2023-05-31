#include "vectors.hpp"

namespace phy{

class Object{
public:

// Variables
phy::Vector pos = {0, 0, 0}; // Position (x, y, z). z is used for height
phy::Vector vel = {0, 0, 0}; // Velocity
phy::Vector acc = {0, 0, 0}; // Acceleration
phy::Vector frc = {0, 0, 0}; // Forces

// Methods
void setV(double _x, double _y, double _z){
    this->vel.x = _x;
    this->vel.y = _y;
    this->vel.z = _z;
};

void setA(double _x, double _y, double _z){
    this->acc.x = _x;
    this->acc.y = _y;
    this->acc.z = _z;
};

void setF(double _x, double _y, double _z){
    this->frc.x = _x;
    this->frc.y = _y;
    this->frc.z = _z;
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