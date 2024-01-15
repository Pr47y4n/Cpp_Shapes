#include "triangle.h"

#include <iostream>
#include <cmath>

double Triangle::calculate_perimeter() const 
{
	return m_x + m_y + m_z;
}

double Triangle::calculate_area() const
{
	double s = calculate_perimeter() / 2;
	return sqrt(s * (s - m_x) * (s - m_y) * (s - m_z));
}

void Triangle::display_info() const
{
	std::cout << "The area of triangle is : " << calculate_area() << std::endl;
	std::cout << "The perimeter of triangle is : " << calculate_perimeter() << std::endl;
}
