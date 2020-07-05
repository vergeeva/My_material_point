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

//String^ my_material_point::ToString() {
//	return String::Format("({0},{1}), масса = {2} кг", X, Y, m);
//}

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

my_material_point^ my_material_point::operator=(my_material_point^ object)
{
	this->M = object->M;
	this->X = object->X;
	this->Y = object->Y;
	return this;
}

bool my_system_point::empty()
{
	return len == 0;
}
bool my_system_point::full()
{
	return len == 100;
}
bool my_system_point::del(double m)
{
	if (!empty())
	{
		for (int i = 0; i < len; i++)
		{
			if (this->sys_point[i]->M == m)
			{
				for (int k = i; k < len; k++)
				{
					sys_point[k] = sys_point[k + 1];
				}
				len--;
				return 1;
			}
		}
	}
	else return 0;
}
bool my_system_point::add(my_material_point^ object)
{
	if (!full())
	{
		this->sys_point[this->len]->operator=(object);
		this->len++;
		return 1;
	}
	else return 0;
}
double my_system_point::m_sum()
{
	double sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += this->sys_point[i]->M;
	}
	return sum;
}

my_material_point^ my_system_point::find_max()
{
	my_material_point^ A;
	A = gcnew my_material_point(0, 0, 0);
	double max = -1;
	int index;
	for (int i = 0; i < len; i++)
	{
		if (this->sys_point[i]->M > max)
		{
			max = this->sys_point[i]->M;
			index = i;
		}
	}
	A->X = sys_point[index]->X;
	A->Y = sys_point[index]->Y;
	A->M = sys_point[index]->M;
	return A;
}


void my_system_point::View(System::Windows::Forms::DataGridView^ DGV)
{

	if (len == 0)
	{
		DGV->Rows[0]->Cells[0]->Value = "";
		DGV->Rows[0]->Cells[1]->Value = "";
	}
	else
	{
		DGV->RowCount = len;
		for (int i = 0; i < len; i++)
		{
			DGV->Rows[i]->Cells[0]->Value = this->sys_point[i]->ToString();
			DGV->Rows[i]->Cells[1]->Value = this->sys_point[i]->M;
		}
	}
}
