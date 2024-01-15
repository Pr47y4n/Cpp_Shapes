#include "circle.h"

#include <iostream>

double Circle::calculate_area() const
{
	return 3.14 * m_radius * m_radius;
}

double Circle::calculate_perimeter() const
{
	return 2 * 3.14 * m_radius;
}

void Circle::display_info() const
{
	std::cout << "Area of circle :" << calculate_area() << std::endl;
	std::cout << "Perimeter of circle :" << calculate_perimeter() << std::endl; 
}
