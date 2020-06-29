#pragma once
using namespace System;
// ����� �� ����� ������� ����� � ������. 
// ������������ - �� ��������� ���������� �����:
// 1. ������� �������� property.
// 2. ���������� ����� ToString.
// 3. ���� ����� Set, �� ���������������.

public ref class My_Point {
	float x, y;		// ���������� �����.
public:
	My_Point(void);
	My_Point(float, float);
		void Set(float, float);
		float Distance();
	property float X {
		float get() {
			return x;
		}
		void set(float X) {
			x = X;
		}
	}
	property float Y {
		float get() {
			return y;
		}
		void set(float Y) {
			y = Y;
		}
	}
	virtual String ^ ToString() override;

};

public ref class my_material_point : public  My_Point
{
	float m;
	bool check()
	{
		return this->m > 0;
	}
public:
	my_material_point(void) : My_Point()
	{
		this->m = 1;
	}
	my_material_point(float mm, float a, float b) : My_Point(a, b)
	{
		this->m = mm;
		if (!this->check()) this->m = 1;
	}
	virtual String^ ToString_m() override;

	property float M {
		float get() {
			return m;
		}
		void set(float M) {
			m = M;
		}
	}
	//bool h(my_material_point);
	bool operator < (my_material_point^);
	bool operator > (my_material_point^);
	bool operator ==(my_material_point^);
};
