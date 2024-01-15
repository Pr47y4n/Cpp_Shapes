#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle: public Shape
{
public:
	Triangle(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {}
	~Triangle() = default;

private:
	double m_x;
	double m_y;
	double m_z;

public:
	double calculate_area() const override;
	double calculate_perimeter() const override;
	void display_info() const override;
};

#endif // TRIANGLE_H
