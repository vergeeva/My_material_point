#include "My_Point.h"
#include <math.h>
using namespace System;
My_Point::My_Point(void) {
	x = y = 1;
}
My_Point::My_Point(float xx, float yy) {
	x = xx;
	y = yy;
}
String ^ My_Point::ToString() {
	return String::Format("({0},{1})", x, y);
}
void My_Point::Set(float xx, float yy) {
	x = xx;
	y = yy;
}
float My_Point::Distance()
{
	return (sqrt(pow(x, 2) + pow(y, 2)));
}

String^ my_material_point::ToString_m() {
	return String::Format("{0} Í„", m);
}

bool my_material_point::operator < (my_material_point ^other)
{
	return this->M < other->M;
}

bool my_material_point::operator > (my_material_point^ other)
{
	return this->M > other->M;
}

bool my_material_point::operator == (my_material_point ^other)
{
	return this->M == other->M;
}
