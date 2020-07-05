#pragma once
#define size 100
using namespace System;

public ref class My_Point {
	float x, y;		// Координаты точки.
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
	//virtual String^ ToString() override;

	property float M {
		float get() {
			return m;
		}
		void set(float M) {
			m = M;
		}
	}
	bool operator < (my_material_point^);
	bool operator > (my_material_point^);
	bool operator ==(my_material_point^);
	my_material_point^ operator=(my_material_point^ object);
};
public ref class my_system_point
{
	array <my_material_point^>^ sys_point = gcnew array <my_material_point^>(size);
	int len;
	bool Check()
	{
		return len >= 0;
	}
public:
	my_system_point()
	{
		this->len = 0;
	}
	my_system_point(int len)
	{
		this->len = len;
		if (Check())
		{
			for (int i = 0; i < this->len; i++)
			{
				this->sys_point[i] = gcnew my_material_point();
			}
		}
		this->len = 0;

	}
	void View(System::Windows::Forms::DataGridView^ DGV);
	bool empty();
	bool full();
	bool del(double);
	bool add(my_material_point^);
	double m_sum();
	my_material_point^ find_max();
	property int Len {
		int  get() {
			return len;
		}
		void set(int l) {
			len = l;
		}
	}
};
