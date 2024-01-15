#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle: public Shape
{
public:
	Rectangle(double l, double w) : m_length(l), m_width(w) {}
	~Rectangle() = default;

private:
	double m_length;
	double m_width;

public:
	double calculate_area() const override;
	double calculate_perimeter() const override;
	void display_info() const override;
};

#endif //RECTANGLE_C
