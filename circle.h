#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: public Shape 
{
public:
	Circle(double r) : m_radius(r) {}
	~Circle() = default;

private:
	double m_radius;	

public:
	double calculate_area() const override;
	double calculate_perimeter() const override;
	void display_info() const override;		
};

#endif // CIRCLE_H
