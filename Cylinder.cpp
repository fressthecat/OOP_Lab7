# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream> 
#include <iomanip>
using namespace std;

long double round3(long double x) {
  return floor(x * 1000 + 0.5) / 1000;
} 


double Cylinder :: SurfaceArea(){
    long double base_area = M_PI * radius * radius;
    long double side_area = 2.0 * M_PI * radius * height;
    return round3(2.0 * base_area + side_area);
}

double Cylinder :: Volume(){
    long double base_area = M_PI * radius * radius;
    
    return round3(base_area * height);
}

double Cylinder :: Circumference(){

    return round3(2.0 * M_PI * radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3);
    out << "Circumference: " << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume();
    return out;
}

# endif
