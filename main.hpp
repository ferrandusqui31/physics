#include <math.h>

namespace phy{

class obj{
public:

// Variables
double x, y, z; // Position (height is z)
double vx, vy, vz; // Velocity

// Methods
void setv(double a, double b, double c)
{
    vx=a;
    vy=b;
    vz=c;
}

// Constructor
obj(double a, double b, double c)
{
    x=a;
    y=b;
    z=c;
}
};

class vector{

public:
double x, y, z; // Components

// Methods
double module()
{
    return sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));
}

// Constructor
vector(double a, double b, double c){
    x=a;
    y=b;
    z=c;
}
};

// Vector operations
vector add(vector v1, vector v2){
    return vector (v1.x+v2.x , v1.y+v2.y , v1.z+v2.z);
}

vector subtract(vector v1, vector v2){
    return vector (v1.x-v2.x , v1.y-v2.y , v1.z-v2.z);
}
}