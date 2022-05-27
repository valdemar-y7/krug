#ifndef KRUG_H
#define KRUG_H

#include <iostream>
#include <cmath>

using namespace std;

const double Pi = 3.14;

struct krug {
	double radius;
	void setRadius(double);
	double getRadius();
	double getPloshad();
	double getLength();
};

#endif 
