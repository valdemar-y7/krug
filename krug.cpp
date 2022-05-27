#include "krug.h"

void krug::setRadius(double rad) {
	this->radius = rad;
}

double krug::getRadius() {
	int rad = this->radius;
	return rad;
}
double krug::getPloshad() {
	return Pi * pow(radius, 2);
}

double krug::getLength() {
	return 2 * Pi * this->radius;
}
