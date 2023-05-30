#include <math.h>

namespace phy{

class Vector{

public:
double x, y, z; // Components

// Methods
double module()
{
    return sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));
}

// Constructor
Vector(double _x, double _y, double _z){
    x=_x;
    y=_y;
    z=_z;
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